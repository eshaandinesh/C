#include <stdio.h>
int main() {
float num1,num2;
int oper;
printf("Enter num1 and num2: ");
scanf("%f %f",&num1,&num2);
printf("Enter the operator(+=1,-=2,*=3,/=4): ");
scanf("%d",&oper);
switch(oper){
  case 1:
    printf("Sum = %f",num1+num2);
    break;
  case 2:
    printf("Diff = %f",num1-num2);
    break;
  case 3:
    printf("Prod = %f",num1*num2);
    break;
  case 4:
    printf("Div = %f",num1/num2);
    break;
  default:
    printf("Invalid input");
    break;
  }
}
