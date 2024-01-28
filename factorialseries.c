#include <stdio.h>
int factorial(int num){
    if(num>1){
        return num*factorial(num-1);
    }
    else if(num==1 || num==0){
        return 1;
    }
    else{
        printf("Error");
    }
}

int series(int num){
    if(num>1){
        return factorial(num)/num + series(num-1);
    }
    else if(num==1){
        return 1;
    }
    else{
        printf("Error");
    }
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int sum = series(num);
    printf("The sum of the series is: %d",sum);
}