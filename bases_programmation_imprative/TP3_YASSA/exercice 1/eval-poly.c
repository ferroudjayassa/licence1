#include <stdio.h>
#include <stdlib.h>

 double eval_poly(double x);

 int main(void) {
 printf("Entrez une valeur réelle : ");
 double v;
 scanf("%lf", &v);

 double r = eval_poly(v);
 printf("La valeur du polynome pour %lf est %lf.\n", v, r);

 return EXIT_SUCCESS;
 }

 double eval_poly(double x) {
 double resultat;

 resultat = 3 * x * x - 4 * x + 1;

 return resultat;
 }


//Que fait la fonction eval_poly?
//==> la fonction calcul la valeur de polynome pour chacun de 1 et 2
/* c'est à dire elle prends une valeur réelle x en entrée,
   elle effectue des opérations ou de calculs sur le polynome 
  et elle renvoie "resultat" qui est 
  p(x)=3*x*x-4*x+1 comme reultat*/
