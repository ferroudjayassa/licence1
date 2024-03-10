#include <stdio.h>
#include <stdlib.h>

double SinusCosinus (int n, double x) {
  if (n<=0) {
    return 1.0;
  }
  int k = 0;
  double t = 1 ;
  double s = t;
  
  while (k<n) {
    k++;
    t*= ((-1)^1/2)*x/k ;
    s+= t;
  }
  return s;
}

int main (void) {
  int n;
  double x;
  
  printf("saisissez n et x :\n");
  if (scanf("%d \n%lf",&n,&x)!=2) {
    printf("Erreur de saisir\n");
  }
    
  printf("La somme est : %lf",SinusCosinus (n,x));
  
  return EXIT_SUCCESS;
  
  }

