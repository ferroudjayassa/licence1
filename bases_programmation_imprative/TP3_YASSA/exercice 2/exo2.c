#include <stdio.h>
#include <stdlib.h>

 float moyenne(float x,float y);
	 
int main(void) {
  
 printf("saisissez deux valeurs reelles :");
 
 	float a,b,c,d,m;
 scanf("%f %f %f %f",&a,&b,&c,&d); 

   m = moyenne(moyenne(a,b),moyenne(c,d));
 printf("la moyenne des deux valeurs est :%f",m);

 return EXIT_SUCCESS;
}
 float moyenne(float x,float y)
  {
	 float M;
	 return M=(x+y)/2;
   }

