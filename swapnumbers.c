/*
#include <stdio.h>
void swap(int a,int b){
int temp = a;
a = b;
b = temp;
printf("\nAfter swapping %d %d",a,b);

}
int main(){
int a = 3, b = 5;
printf("\nBefore swapping %d %d",a,b);
swap(a,b); //call by value
}
*/
#include <stdio.h>
void swap(int *a,int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
  //printf("\nAfter swapping %d %d",a,b);
}

int main(){
  int a = 3, b = 5;
  printf("\nBefore swapping %d %d",a,b);
  swap(&a,&b); //call by value
  printf("\nAfter swapping %d %d",a,b);
}
