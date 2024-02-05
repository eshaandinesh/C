#include <stdio.h>
void fib(int a, int b, int n){
  if(n>0){
    printf("%d ",(a+b));
    n--;
    fib(b,a+b,n);
  }
}
int main(){
  int n;
  printf("Enter n: ");
  scanf("%d",&n);
  int a = 0;
  int b = 1;
  printf("%d %d ",a,b);
  fib(a,b,n);
}
