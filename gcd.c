#include <stdio.h>
int num1,num2;
int gcd(int n){
    if(num1 % n == 0 && num2 % n == 0)
        return n;
    else
        gcd(n-1);
}
int main(){
    int num;
    scanf("%d",&num);
    num1 = num/100;
    num2 = num%100;
    if(num1 == 0 || num2 == 0){
        printf("No");
        return 0;
    }
    int g;
    if(num1>num2)
        g = gcd(num1);
    else
        g = gcd(num2);
    printf("%d",g);
}
