//compiler : gcc -c -std=c18 -Wpedantic -Wall -Wconversion -Wextra -Wwrite-strings -Werror -Wfatal -errors -O2 "%f"
//build : gcc -std=c18 -Wpedantic -Wall -Wconversion -Wextra -Wwrite-strings -Werror -Wfatal -errors -O2 -o "%e" "%f" -lm




# include <stdio.h>
# include <stdlib.h>

 int main(void) {
 printf ("Entrez un nombre :\n");

 int a;
 if (scanf("%d", &a) != 1) {
  printf ("Echec lors la lecture des deux entiers\n");
      exit (EXIT_FAILURE); }
 
 
 printf ("le double de %d est %d\n", a, 2 * a);

 return EXIT_SUCCESS ;
 }

/*quand on compile le programme, noremalement il nous affiche le double de l'entier qu'on entre
 par exemple si on rentre 8 il nous affcihe 16 */
/*mais la il ya une erreur de compilation donc il faut tester le scanf */
