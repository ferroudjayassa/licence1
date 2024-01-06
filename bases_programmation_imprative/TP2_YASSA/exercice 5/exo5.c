#include <stdio.h>
#include <stdlib.h>

  int main(void)
 {
    int s,d,a,b; 
  
  printf("pensez tres fort a deux entiers a et b\n");
  printf("doonnez moi leurs sommes s et leurs différence d (respectez l_ordre s_il vous plait):\n");  
  scanf("%d\n%d\n",&s,&d);
    
    a = (d+s)/2;
    b =  s-a;
    
  printf("le premier chiffre a dont vous avez pensez est : %d\n",a);
  printf("le deuxieme chiffre b dont vous avez pensez est : %d",b);

    

	  return EXIT_SUCCESS;
  }

