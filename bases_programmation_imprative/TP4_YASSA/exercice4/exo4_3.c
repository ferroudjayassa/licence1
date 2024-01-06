#include <stdio.h>
#include <stdlib.h>

int maximum( int x, int y);

int main (void) {
  int x,y,z;
  printf ("Entrez trois entiers:\n"); 
   
  if (scanf ("%d\n%d\n%d",&x,&y,&z) != 3) {
    printf ("Erreur de saisir\n");
      exit (EXIT_FAILURE); }
    else 
    printf ("le maximum est %d\n",maximum (maximum(x,y),z));
    return EXIT_SUCCESS; }
    
int maximum(int x,int y)  {
  if (x>y){  
    return x;}
    else  
      return y;
    

}
