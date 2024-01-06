#include <stdio.h>
#include <stdlib.h>
  
  int somme (int n,int m);

  int main (void) {
    int n,m;
    printf ("Entrez deux entiers pour calculer la somme des entiers compris entre eux :\n");
    if ((scanf ("%d %d",&n,&m) != 2)) {
      printf("erreur de saisir\n");
      exit (EXIT_FAILURE);
    }
    int x = somme (n,m);
    printf ("La somme des entiers compris entre n et m y compris n et m est : %d\n",x);
    
    return EXIT_SUCCESS;
  }
  
  int somme (int n,int m) {
    int i,somme =0;
    for (i =n;i<=m;++i) {
      somme = somme +i;
    }
    return somme;
  }
