#include <stdio.h>
#include <stdlib.h>


  int max (int t [], size_t n);
  int main (void) { 
    
  
    size_t taille =3;
    size_t i;
    int t[taille];
    printf ("veuillez donner les valeurs de votre tableau de taille %zu :\n",taille);
    for (i=0;i<taille;i++) {
      if (scanf("%d",&t[i]) != 1) {
        printf ("ERREUR\n");
        exit (EXIT_FAILURE);
      }
    }
    int x = max (t,taille);
    printf ("Le maximum des elements de votre tableau est : %d\n",x);

    
  
    return EXIT_SUCCESS;
  }  
  int max (int t [], size_t n) {
    int maximum = t[0];
    for (size_t k = 1;k<n;++k) {
      if (t[k] > maximum) {
        maximum = t[k];
      }
    }
    return maximum;
  }

