#include <stdio.h>
#include <stdlib.h>

  int main(void)
 { 
   
    int arendre;
    double apayer;
    double payer;
    int nmbrp =0;
    printf("saisissez le prix a payer et le prix paye :");
    scanf("%lf\n%lf",&apayer,&payer);

  
    arendre = (int)((payer-apayer)*100);
    
     nmbrp = arendre/200;      
       int piece2 = arendre/200;
     arendre = arendre%200;
    
     nmbrp = nmbrp+arendre/100;        
       int piece1 = arendre/100;
     arendre = arendre%100;


     nmbrp = nmbrp+arendre/50;       
       int piece50s = arendre/50;
     arendre = arendre %50;

        
     nmbrp = nmbrp+arendre/20;       
      int piece20s = arendre/20;
     arendre = arendre%20;


     nmbrp = nmbrp+arendre/10;        
      int piece10s = arendre/10;
     arendre = arendre%10;


     nmbrp = nmbrp+arendre/5;     
      int piece5s = arendre/5;
     arendre = arendre%5;
     
     
     nmbrp = nmbrp+arendre/2;     
      int piece2s = arendre/2;
     arendre = arendre%2;
     

     nmbrp = nmbrp+arendre/1;     
      int piece1s = arendre/1;
     arendre = arendre%1;
     
     
    nmbrp = nmbrp+arendre;
    
    
        printf("vous devez rendre %.2lf euros dont : %d pieces dont :\n",payer-apayer,nmbrp);
        printf("%d pieces de 2euros\n",piece2);
        printf("%d pieces de 1 euro\n",piece1); 
        printf("%d pieces de 50 centimes\n",piece50s);
        printf("%d pieces de 20 centimes\n",piece20s); 
        printf("%d pieces de 10 centimes\n",piece10s);
        printf("%d pieces de 5 centimes\n",piece5s);
        printf("%d pieces de 2 centimes\n",piece2s);
        printf("%d pieces de 1 centimes\n",piece1s);


    
  return EXIT_SUCCESS;
    
 }
