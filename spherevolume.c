#include <stdio.h>
int main(){
  float radius;
  float volume;
  printf("Enter the radius: ");
  scanf("%f",&radius);
  volume = (4.0/3)*3.14*radius*radius*radius;
  printf("The volume is: %f",volume);
}
