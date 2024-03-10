//  Utilisation :
//    tintin_all
//
//  Affiche les personnages d'albums de Tintin figurant dans une très petite
//    base de données.
//
//  Renvoie EXIT_FAILURE à l'environnement d'exécution si argc est différent de
//    l'unité.
//  Renvoie EXIT_SUCCESS sinon.

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define NAME_LENGTH_MAX 63

typedef struct {
  char lastname[NAME_LENGTH_MAX + 1];   //  nom
  char firstname[NAME_LENGTH_MAX + 1];  //  prénom(s)
  int yearfirstapp;                     //  année de première apparition
} character;

/* character : alias d'une structure anonyme permettant de mémoriser le nom et
    le(s) prénom(s) d'un personnage des albums de Tintin ainsi que l'année de
    publication de l'album dans lequel il apparait pour la première fois.
*/

void character_display_names(const character *q); //declaraation de la fonction avant main 

void character_display_names2(const character q) {
  printf("%s %s\n",q.lastname,q.firstname);
  }  
  
int main (int argc, char *argv[]){
  
character names[] = {
    {"Ben Kalish Ezab","Abdallah",1950},
    {"Ben Salaad","Omar",1941},
    {"Alcazar","Peggy",1976},
    {"Bolivar","Hippolyte",1932},
    {"Haddock","Archibald",1941},
    {"Bada","Ramon",1937},
    {"Wagner","Igor",1939},
    {"Charlet","Marc",1948},
    {"Perez","Alonzo",1937},
    {"Bazaroff","Basil",1937},
    {"Ben Moulfrid","Youssouf",1950},
    {"Tortilla","Rodrigo",1937},
    {"Cartoffoli","Arturo Benedetto Giovanni Giuseppe Pietro Archangelo Alfredo",1956},
    {"Boullu","Isidore",1963},
    {"Capone","Al",1932},
    {"Sakharine","Ivan Ivanovitch",1943},
    {"Topolino","Alfredo",1956},
    {"Tournesol","Tryphon",1945},
    {"Thompson","Allan",1934},
    {"Lampion","Seraphin",1956},
    {"Rastapopoulos","Roberto",1934},
    {"Castafiore","Blanca",1939},
    {"Zarate","Ramon",1948},
    {"Bergamotte","Hippolyte",1948},
    {"Szprinkoth","Stephan",1956},
    {"Ben Mahmoud","Ali",1950},
  };

if(argc !=2){
  printf("One and only one parameter is expected\n Syntax : ./nomfichier.exe VALUE");
  exit(EXIT_FAILURE);
}

if (strcmp(argv[1],"")==0){
  for (size_t i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
    character_display_names(&names[i]);
  }
} else {
    for (size_t i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
      char * existeInFirstname = strstr( names[i].firstname, argv[1] );
      char * existeInLastname = strstr( names[i].lastname, argv[1] );
       if ( existeInFirstname != NULL  || existeInLastname != NULL){
             character_display_names(&names[i]);
        }
    }
}

  return EXIT_SUCCESS;
}
void character_display_names(const character *q) {

  printf("%s %s\n",q->lastname,q->firstname);
  }
  

  
