#include <stdio.h>
#include <stdlib.h>


  void initialisation_fibo (size_t tableau []) {
    tableau [0] = 0;
    tableau [1] = 1;
    for (size_t i = 2; i<=46 ; ++i) {
      tableau [i] = tableau [i-1] + tableau [i-2];
    }
  }
  
  int main (void) {
    size_t fibonacci [47];
    initialisation_fibo (fibonacci);
    
    int valeur;
    while (scanf("%d",&valeur) == 1) {
      if (valeur >= 0 && valeur <= 46) {
        printf ("%zu\n", fibonacci[valeur]);
      }
      else {
        printf ("ERREUR\n");
      }
    }
    
    return EXIT_SUCCESS;
  }
  
  
  
  
  
  
  
  
  
  
  
