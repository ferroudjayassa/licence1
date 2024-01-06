#include <stdio.h>
#include <stdlib.h>
void Compteur(int comptage[], int valeur);
void afficherResultat(int comptage[]);
int Indice_max (int comptage[]) ;


int main(void) {
    int comptage[10] = {0};
    int valeur;

    while (scanf("%d", &valeur) == 1) {
        Compteur(comptage, valeur);
    }

    afficherResultat(comptage);
    int ind =  Indice_max(comptage);
    printf("%d", ind);

    return EXIT_SUCCESS;
}

int Indice_max (int comptage[]) {
  int i_max= 0;
  for ( int i = 1; i < 10; ++i){
    if (comptage[i]>comptage[i_max]){
          i_max=i;
          
    }
  }
  return i_max; 
}
      
void afficherResultat(int comptage[]) {
    printf("Vous avez saisi :\n");
    for (int i = 0; i < 10; ++i) {
        int indiceMax = Indice_max(comptage);
        if (comptage[indiceMax] > 0) {
            printf("%d nombre se terminant par %d\n", comptage[indiceMax], indiceMax);
            comptage[indiceMax] = 0; 
        }
    }
}


void Compteur(int comptage[], int valeur) {
    int dernierChiffre = valeur % 10;
    comptage[dernierChiffre]++;
}

