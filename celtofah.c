#include <stdio.h>
int main(){
  float celsius;
  printf("Enter the celsius value: ");
  scanf("%f",&celsius);//& ---> store input of f datatype in address of celsius, cannot put input print in the scanf
  float fahren = 9.0/5*celsius+32;
  printf("Fahrenheit value of %f degree celsius is %f",celsius,fahren);
}
