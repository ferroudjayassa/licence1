#include <stdio.h>
#include <stdlib.h>
float max (float t [], size_t n);
float min (float t [], size_t n);
float moy_olympique (float t [], size_t n);


int main (void) { 
  
  size_t taille =5;
    size_t i;
    float t[taille];
    printf ("veuillez donner les valeurs de votre tableau de taille %zu :\n",taille);
    for (i=0;i<taille;i++) {
      if (scanf("%f",&t[i]) != 1) {
        printf ("ERREUR\n");
        exit (EXIT_FAILURE);
      }
    }

   min (t,taille);
   max (t,taille);
   float c = moy_olympique (t,taille);
   
   printf ("la moyenne olympique de vos notes est: %f\n",c);


  }

  float max (float t[], size_t n) {
    float maximum = t[0];
    for (size_t k = 1;k<n;++k) {
      if (t[k] > maximum) {
        maximum = t[k];
      }
    }
    return maximum;
  }
  float min (float t[], size_t n) {
    float minimum = t[0];
    for (size_t k = 1;k<n;++k) {
      if (t[k] < minimum) {
        minimum = t[k];
      }
    }
    return minimum;
  }
  float moy_olympique (float t [], size_t n) {
    float somme = 0;
    for (size_t k = 0;k<n;++k) {
      somme = somme + t[k];
    }
    somme = somme - max(t,n) - min(t,n);
    float moyenne = somme / (float)(n-2);
    return moyenne;
  }
    
