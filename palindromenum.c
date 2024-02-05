#include <stdio.h>
int main(){
  int num,num2,t;
  printf("Enter a number: ");
  scanf("%d",&num);
  t = num;
  num2 = 0;
  while(t>0){
    num2 = num2*10 + t%10;
    t = t/10;
  }
  if(num==num2){
  printf("It is a palindrome");
  }
  else{
    printf("It is not a palindrome");
  }
}
