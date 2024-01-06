#include <stdio.h>
#include <stdlib.h>



int main (void) {
  
  double j,km,p1,p2,tarif1,tarif2;
  
  printf ("entrez le nombre de jours et kilometres :\n");
  
  if (scanf ("%lf\n%lf",&j,&km) != 2) { 
    printf ("Erreur de saisir\n");
    exit (EXIT_FAILURE);
  }
  printf ("entrez le prix au kilometre au cas vous depassez les 500 km par jour et le prix si vous depassez les 2000 km :\n ");
  
  if (scanf ("%lf\n%lf",&p1,&p2) != 2) {
    printf ("Erreur de saisir");
    exit (EXIT_FAILURE);
  }
  if ( km/j <= 500) {
    tarif1 = j*80; }
    else { tarif1 = j*80 + (km - (500*j))* p1; }
  
  if ( km <= 2000) {
    tarif2 = km* p2; }
    else { tarif2 = km* p2 - (km - 2000)*p2*0,115; }
    
  if ( tarif1 <= tarif2) { 
    printf ("le meilleure tarif pour vous est le premier, vous payez :%lf\n",tarif1);}
    else { printf ("le meilleure tarif pour vous est le deuxieme, vous payez :%lf",tarif2); }
    
    return EXIT_SUCCESS;
  }
