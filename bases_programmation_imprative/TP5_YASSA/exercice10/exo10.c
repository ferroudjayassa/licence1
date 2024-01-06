#include <stdio.h>
#include <stdlib.h>

int main (void) {

int x;
printf ("entrez une annee supeieure a 1582 :\n");
if ((scanf ("%d",&x) != 1) || (x < 1582)) {
  printf ("Erreur de saisir");
  exit (EXIT_FAILURE);
}
if ((x%4==0)||(x%100 != 0)||(x%400==0)) {
  printf ("lannee %d est bien bissextile",x);
} else { 
  printf ("lannee %d nest pas bissextile",x);
}  
  
  return EXIT_SUCCESS;
}
