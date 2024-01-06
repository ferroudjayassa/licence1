#include <stdio.h>
#include <stdlib.h>
void quo_rem(int a,int b, int *q,int *r);

int main(void)
{
  int a,b,q,r;
  printf("veuillez saisir deux entiers a et b:\n");
  if(scanf("%d%d\n",&a,&b)!=2 || a<0 || b<=0)
  {
    printf("echec : erreur lors de la lecture\n");
    exit(EXIT_FAILURE);
  }
  quo_rem(a,b,&q,&r);
  printf("le quotient de %d/%d est %d \n et  reste de %d/%d est %d\n",a,b,q,a,b,r);
return EXIT_SUCCESS;
}

    
void quo_rem(int a,int b, int *q,int *r)
{
  if(a<b)
  {
    *q=0;
    *r=a;
  }
  else
  {
    if(a==b)
    {
      *q=1;
      *r=0;
    }else
    {
      *q=0;
      while(a>b)
      {
        *q=*q+1;
         a=a-b;
        *r=a;
        
      }
    }
  }
}
