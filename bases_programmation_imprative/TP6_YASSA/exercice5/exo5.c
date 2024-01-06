#include <stdio.h>
#include <stdlib.h>

  int factorielle (int n);
  
  int main (void) {
    int n;
    printf ("donnez un entier strictement positif : ");
    if ((scanf ("%d",&n) != 1) || (n<=0)) {
      printf("erreur de saisir");
      exit (EXIT_FAILURE);
    }
     int x = factorielle (n);
     printf("le factorielle de %d est : %d \n",n,x);
     
     return EXIT_SUCCESS;
   }
  
  int factorielle (int n){
    int i,cpt=1;
    for (i=1;i<=n;++i) {
      cpt = cpt *i;
    }
    return cpt;
  }
    

