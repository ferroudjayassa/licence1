#include <stdio.h>
#include <stdlib.h>

double  arctan (int n,double x) {
   if(n<0){
        return 1.0;
    }
    int k = 0;
    double t =x;
    double s = t;
    while (k<n) {
      k++;
      t*=((-1)*x*x*(2*k-1))/(2*k+1);
      s+=t;
    }
    return s;
  }
 int main (void) {
   int n;
   double x;
   
   printf("Donnez x et n :");
    if (scanf("%d %lf", &n, &x) != 2) {
      printf("Erreur de saisir! \n");
    } 
   printf("la somme est %lf",  arctan(n,x));
  
    return EXIT_SUCCESS;
   
  }

