#include <stdio.h>
int main(){
  float side1, side2, side3;
  printf("\nEnter side 1,2 and 3: ");
  scanf("%f %f %f",&side1,&side2,&side3);
  if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2){
    printf("It is a valid triangle");
  }
  else{
    printf("It in not a valid triangle");
  }
}
