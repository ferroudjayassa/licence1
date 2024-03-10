#include <stdio.h>
#include <stdlib.h>
#define MAX 8
#define SMAX "8"

int main2 (void) {
  
  char mot [MAX+1];
  int cpt =0;
  
  while (scanf ("%8s",mot)==1){
    cpt++;
    printf ("%d \t %s\n",cpt,mot);
  }
  
  return EXIT_SUCCESS;
  
}



int main(void) {
  
  char mots[4][MAX + 1];  // Tableau de chaînes pour stocker les mots
  int cpt = 0;
  
  // Boucle qui lit les chaînes depuis l'entrée standard jusqu'à la fin du fichier
  // ou jusqu'à ce qu'une erreur se produise
  while (scanf("%" SMAX "s", mots[cpt]) == 1  ) {
    // Incrémente le compteur pour numéroter les chaînes
    cpt++;
    
    // Optionnel : Vérifier si nous avons atteint la limite MAX
    if (cpt >= 4) {
      printf("Nombre maximal de mots atteint.\n");
      break;
    }
  }

  // Affiche tous les mots stockés
  printf("Mots stockés : \n");
  for (int i = 0; i < cpt; i++) {
    printf("%d \t %s\n", i + 1, mots[i]);
  }
  
  // Indique une sortie réussie du programme avec le code de succès EXIT_SUCCESS
  return EXIT_SUCCESS;
}
