#include <stdio.h>
#include <stdlib.h>

int somme_impair (int x);

  int main (void) {
    int x;
    printf ("entrez un eniter positif :");
    if ((scanf ("%d",&x) != 1) || (x<0)) {
      printf("erreur de saisir");
      exit (EXIT_FAILURE);
    }
  
    int z = somme_impair(x);
    printf ("la somme des %d premiers entiers impairs est : %d\n",x,z);
    return EXIT_SUCCESS;
  }


  int somme_impair (int x){
    int i,cpt=0;
    for (i=0;i<=x;++i) {
      if ( i%2!=0) {
        cpt = cpt+i;
      }
    } 
    return cpt;
  }
