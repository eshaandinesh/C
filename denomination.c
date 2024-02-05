#include <stdio.h>
int main(){
  int total;
  int rem,ten,twenty,fifty,hundred;
  printf("Enter the total: ");
  scanf("%d",&total);
  hundred = total/100;
  total = total%100;
  fifty = total/50;
  total = total%50;
  twenty = total/20;
  total = total%20;
  ten = total/10;
  rem = total%10;
  printf("Number of notes needed = \nHundreds: %d\nFifties: %d\nTwenties: %d\nTens: %d\nRemaining: %d",hundred,fifty,twenty,ten,rem);
}
