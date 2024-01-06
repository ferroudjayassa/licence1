#include <stdio.h>
#include <stdlib.h>
  
 int time_to_sec(int heure, int minute, int seconde);
 void sec_to_time(int x,int *a,int *b,int *c);
  
 int main (void)
{
   printf("saisissez lheure sous forme (heure,minute,seconde\n):");
      int ts, s, h, m, s;

   scanf("%d %d %d\n",&h,&m,&s);
   
   // ts => temps en secndes 
   ts = time_to_sec (h,m,s);
   printf("la valaure horaire en senconde est : %d\n",ts);
   
   printf("saisissez lheure en secondes \n");
   scanf("%d\n",s);
   sec_to_time (s, &h, &m, &s);
   printf("lheure sous forme h m s est : %d %d %d\n",h, m, s);
   
   return EXIT_SUCCESS;
}
 int time_to_sec(int heure, int minute, int seconde) 
  {
    return heure*3600+minute*60+seconde;
  }

 void sec_to_time(int x,int *a,int *b,int *c)
  {
    *a = x/3600;
    *b = (x%3600)/60;
    *c = (x%3600)%60;
  }
         

/*  la commande (echo "12:34:56" | ./time_to_sec > conv_sec.txt) elle produit :
 le résultat de (echo "12:34:56") qui est : "12:34:56" va etre l'entrée du pogramme "exo3.c" 
 et le résultat du cette commande va etre enregistré dans un fichier s'appelle : "conv_sec.txt  */
