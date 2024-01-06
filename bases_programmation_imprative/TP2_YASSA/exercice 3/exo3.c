#include <stdio.h>
#include <stdlib.h>

  int main(void)
 {
   int x;

    printf("saisir un nombre de secondes a convertir : \n");
    scanf("%d",&x);
   
//NB_SEC_HEURE => nombre de secondes dans une heure
   const int NB_SEC_HEURE=3600;

//NB_SEC_MIN => nombre de secondes dans une minute
   const int NB_SEC_MIN=60;
   
   int les_heures= x/NB_SEC_HEURE;
   int les_minutes= (x-(NB_SEC_HEURE*les_heures))/NB_SEC_MIN;
   int les_secondes= (x-(NB_SEC_HEURE*les_heures))-(NB_SEC_MIN*les_minutes);

     printf("%d h %d min %d sec", les_heures,les_minutes,les_secondes);


	  return EXIT_SUCCESS;
  }
