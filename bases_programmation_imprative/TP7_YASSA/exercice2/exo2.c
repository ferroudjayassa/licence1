#include <stdio.h>
#include <stdlib.h>

  int main (void) { 
    
    int rest_mod;
    int nombre;
    int resultat = 0;
    printf ("Entrez un nombre pour vous donner son inverse : \n");
    if (scanf ("%d",&nombre) != 1) {
      printf("erreur de saisir\n");
      exit (EXIT_FAILURE);
    }
    while (nombre != 0) {
      rest_mod = nombre % 10;
      nombre = (nombre - rest_mod)/10;
      resultat = (resultat*10) + rest_mod;
    }
    printf ("linverse de votre nombre est : %d\n",resultat);
  
    return EXIT_SUCCESS;
  }
