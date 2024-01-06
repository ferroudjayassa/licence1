#include <stdio.h>
#include <stdlib.h>

int main (void) {
  
char L;

printf ("entrez une lettre : ");
if (scanf ("%c",&L) != 1) { 
  printf ("Erreur de saisir");
  exit (EXIT_FAILURE); }
    
    if ('a'<= L && 'z' <= L) {
      printf ("%c",L+('a'-'A'));}
    else if  ('A' <= L && L <= 'Z') { 
            printf ("%c",L-('a'-'A'));}

    return EXIT_SUCCESS;
  }
