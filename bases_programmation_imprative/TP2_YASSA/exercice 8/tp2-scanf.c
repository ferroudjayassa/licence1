#include <stdio.h> 
#include <stdlib.h>
//les deux lignes précédentes ce sont les directives de préprocesseur.
/*Ces lignes demandent d'inclure des fichiers au projet, 
 c'est-à-dire d'ajouter des fichiers pour la compilation.
 ces deux fichiers <stdio.h> et <stdlib.h> ce sont bibliothéques 
 qui contient des fonctions qui nous permettent d'afficher
 du texte sur l'écran et bien d'autres choses comme les chiffres ... */

int main(void) { //la fonction principale de programme. 
  
  
//Déclaration des variables du type int (entiers) avec les noms à l'ordre: n1,n2,rep
int n1;
int n2;
int rep;


rep = scanf("%d%d", &n1, &n2); //cette lige calcul le nombre d'enrées, c'est-à-dire: rep=nombre d'entrées = 2.

rep = printf("\n%d\n", rep); //cette ligne va affiher "2" le nombre d'entrées ou arguments.
                             //elle calcul aussi le nombre de caractéres, c'est_à-dire: rep=3 car y'en a ("\n2\n").

printf("%d\n", rep);//cette ligne va afficher "3" le nombre de caractéres, car: rep = 3.

rep = scanf("%*s");//cette ligne va calculer le nombre de chaines de caractéres ("%s").

printf("%d\n", rep);/*cette ligne est cencé afficher la valeur de "rep" 
                     qui est le nombre de chaine de caractéres: rep= 0
                     parcequ'on est cencé lui donner un argument (le scanf attends qu'on lui donne une entrée)
                      et le signe "*" dit d'ignorer tout, meme si on lui donne un argument il va l'ignorer*/ 

return EXIT_SUCCESS;/*Cette ligne indique qu'on arrive à la fin de notre fonction main, 
                      et demande de renvoyer la valeur "EXIT_SUCCESS".*/
} //la limite de la fonction main.


//Que se passe-t-il si on tape 6 Ctrl+D Ctrl+D Ctrl+D lors de l’execution du programme ?
// ==> Il va afficher 1 3 0 au lieu de 2 3 0
/* Car : en tapant Cntrl+D on demnade à l'ordinateur de  passer 
  directement à l'instruction suivante aprés avoir donner 6 comme 
  la seule entrée et donc le nombre d'entrées sera "1"
