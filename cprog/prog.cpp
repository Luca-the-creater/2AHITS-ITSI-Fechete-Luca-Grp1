#include <stdio.h>

int main(){

int n;
int j = 0;


   printf("Die Anzahl der Zahlen: ");
   scanf("%d", &n);

  for(int i = 0; i < n; i++){
  int zahl;
  printf("Zahl eingeben: ");
  scanf("%d", &zahl);

  j = j + zahl;
  }
  printf("Die Summe ist: %d\n", j);
  
  return 0;
}