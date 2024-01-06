# include <stdio.h>
# include <stdlib.h>

 int main(void) {
 int x;
 int y;
 if (scanf("%d%d", &x, &y) != 2) {
 printf ("Erreur : échec lors de la lecture des deux entiers \n");
 exit( EXIT_FAILURE );
 }

 int z = 1;
 if (x > 0 && y < 2) {
 x = x + 1;
 y = 0;
 } else {
 y = 2 * y;
 x = 0;
 z = 0;
 }
 printf ("%d %d %d\n", x, y, z);

 return EXIT_SUCCESS ;
 }

/* 1)-les valeurs affichées par ce programme lorsque l’utilisateur entre les valeurs 
  1 et 1 sont : 2 pour x
               O pour y
               1 pour z
  2)-Et en entrant les valeus -1 et -2 : 0 pour x
                                      -4 pour y
                                      0 pour z  */
                                      
  
