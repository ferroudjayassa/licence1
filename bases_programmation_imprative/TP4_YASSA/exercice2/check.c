# include <stdlib.h>
# include <stdio.h>

 int main(void) {
 printf (" Saisissez deux entiers pour effectuer la division \n");

 int a = 0;
 int b = 0;
 
 if (scanf("%d%d", &a, &b) != 2) {
 printf ("Erreur: echec lors de la lecture des deux entiers\n"); 
 exit( EXIT_FAILURE ); }
 
 
 printf ("%d / %d =\n", a, b);
 printf ("%d\n", a / b);

 return EXIT_SUCCESS ;
 }

/*lorsque vous exécutez le programme en donnant en entrée : « 2/2 » 
 le programme va récupérer la valeur 2 pour a et la deuxiéme valeur 2 pour b
 puis il va faire la dévision entre eux (a/b) et il affiche 2/2, puis il va récupérer 
 sa valeur pour le (a/b) dans le 3em printf et il affiche : 2/2=1  */
