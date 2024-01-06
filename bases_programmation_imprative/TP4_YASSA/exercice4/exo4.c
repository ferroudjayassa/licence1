#include <stdio.h>
#include <stdlib.h>

int maximum( int a, int b );

int main (void) {
  int x,y;
  printf ("Entrez deux entiers:\n"); 
   
  if (scanf ("%d\n%d",&x,&y) != 2) {
    printf ("Erreur de saisir\n");
      exit (EXIT_FAILURE); }
    else 
    printf ("le maximum est %d\n",maximum (x,y));
    return EXIT_SUCCESS; }
    
int maximum ( int x, int y )  {
  if (x>y) { 
    return x;}
    else return y; }    
