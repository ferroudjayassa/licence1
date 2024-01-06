#include <stdio.h>
#include <stdlib.h>


int main (void) {
  char c;

  printf ("entrez un caractere :\n");
  if (scanf ("%c",&c) != 1) { 
    printf ("Erreur de saisir");
  }
  
  else if ((c>= 'A') && (c<='Z')) {
    printf ("MAJUSCULE\n");}
    else if ((c>='a') && (c<='z')) {
      printf ("MINISCULE\n");} 
      
    else if ((c>='0') && (c<='9')) {
    printf ("CHIFFRE\n"); }
    
    else {
      printf ("AUTRE");}

return EXIT_SUCCESS;
}

