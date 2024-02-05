#include <stdio.h>
int main(){
  float radius;
  float height;
  float volume;
  printf("\nEnter the radius and height: ");
  scanf("%f %f",&radius,&height);//multiple inputs
  volume = 3.14*radius*radius*height;
  printf("The volume is: %f",volume);
}
