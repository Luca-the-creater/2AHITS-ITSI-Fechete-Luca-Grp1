#include <stdio.h>

int main(){
int zahl;
int j = 0;

   while (scanf("%d", &zahl) != EOF)
       {
           j = j + zahl;
       }

      printf("Die Summe ist: %d\n", j);
  
  return 0;
}