#include <stdio.h>
#include <stdlib.h>

  int main(void)
 {
   const int NB_SEC_HEURE=3600;
   //NB_SEC_HEURE ===> nombre de secondes dans une heure
   
   const int NB_SEC_MIN=60;
   //NB_SEC_MIN ===> nombre de seconde dans une minute
   
   int les_heures;
   int les_minutes;
   int les_secondes;

  int resultat;

    printf("saisir le nombre d'heure : \n");
    scanf("%d",&les_heures);
    printf("saisir le nombre de minutes : \n");
    scanf("%d",&les_minutes);
    printf("saisir le nombre de secondes : \n");
    scanf("%d",&les_secondes);

     resultat = NB_SEC_HEURE*les_heures+ NB_SEC_MIN*les_minutes +les_secondes;
	  printf("%d h %d min %d sec = %d secondes\n", les_heures,les_minutes,les_secondes,resultat);

	  return EXIT_SUCCESS;
 }

