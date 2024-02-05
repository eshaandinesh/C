#include <stdio.h>
int main(){
  int num;
  printf("\nEnter the number: ");
  scanf("%d",&num);
  if(num%2==0){
    printf("It is an even number");
  }
  else{
    printf("It is an odd number");
  }
}
