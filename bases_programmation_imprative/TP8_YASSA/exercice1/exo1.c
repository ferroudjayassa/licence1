#include <stdio.h>
#include <stdlib.h>

  int main (void) {
    int i;
    int tab [5] = {0};
    printf ("veuillez saisir 5 valeurs pour le tableau :\n");
    for (i=0;i<5;++i) { 
      if (scanf("%d",&tab[i]) != 1) {
        printf ("ERREUR\n");
        exit (EXIT_FAILURE);
      }
    }
    printf ("le contenu du tableau est :\n");

    for(i=0;i<5;i++){
        
        printf("%d\n",tab[i]);

      }    printf("\n");
      
      return EXIT_SUCCESS;
  } 
      
  
  
  
  
  
  
  
  
  
  
  
  
  

