#include <stdio.h>
#include <stdlib.h>

  void compteur (int comptage [], int valeur );
  void afficherResultat (int comptage []);

  int main (void) {
    
    printf ("saisissez des nombres : ");
    int comptage [10] = {0};
    int valeur;
    while (scanf("%d",&valeur) == 1) {
      compteur (comptage,valeur);
    }
    afficherResultat (comptage);
    
    return EXIT_SUCCESS;
  }
    void afficherResultat (int comptage []) {

    printf ("vous avez saisie :\n");
    for (int i=0; i<10 ; ++i) {
      if (comptage [i] > 0) {
        printf ("%d nombre se termine par %d \n",comptage[i], i);
      }
    }
  }
  void compteur (int comptage [], int valeur ) {
    
    int dernierChiffre = valeur % 10;
    comptage [dernierChiffre]++;
  }
      


    

  
  
  
  
