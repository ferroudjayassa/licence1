#include <stdio.h>
#include <stdlib.h>
 int main (void) {
   
    int n;
    int cmpt =0;
    printf ("entrez un entier strictement superieur de 1 :");
    if ((scanf ("%d",&n)!=1) && (n<=1)) {
      printf ("Erreur de saisir\n");
      exit (EXIT_FAILURE);
    } 
    for (int i=1;i<=n;++i) {
      if (i%3==0) {
        printf ("%d est multiple de 3",i);
      }
      cmpt = cmpt + 1;
    }
    printf ("Le nombre diterations est %d\n\n",cmpt);
  
 
    return EXIT_SUCCESS;
  }
