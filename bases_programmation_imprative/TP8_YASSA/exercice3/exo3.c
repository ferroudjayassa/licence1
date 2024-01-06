#include <stdio.h>
#include <stdlib.h>

  int somme (int t[],size_t n);
  
  
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
  int x = somme (t,taille);
  printf ("La somme des elements de votre tableau est : %d\n",x);
    
    return EXIT_SUCCESS;
    }
    
    
  int somme (int t[], size_t n) {
    int somme = 0;
    for (size_t k = 0;k<n;++k) {
      somme = somme + t[k];
      
    }
    return somme;
  }
