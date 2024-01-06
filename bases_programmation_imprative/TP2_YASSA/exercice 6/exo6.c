#include <stdlib.h>
#include <stdio.h>


int main(void)

{
  
  int t;
  float somme;
  int nmbr = 0;

  printf("saisir une somme en euro : ");
  scanf("%f\n", & somme);

  //t == la somme euro en centime
  t = (int)((somme) * 100);

   nmbr = t / 200;
   t = t % 200;

   nmbr = nmbr + t / 100;
   t = t % 100;

   nmbr = nmbr + t / 50;
   t = t % 50;

   nmbr = nmbr + t / 20;
   t = t % 20;

   nmbr = nmbr + t / 10;
   t = t % 10;

   nmbr = nmbr + t / 5;
   t = t % 5;

   nmbr = nmbr + t / 2;
   t = t % 2;

   nmbr = nmbr + t / 1;
   t = t % 1;

   nmbr = nmbr + t;
   
  printf("vous devez donner %d pieces pour payer %.2f euro \n", nmbr, somme);

 
  return EXIT_SUCCESS;
  
}
