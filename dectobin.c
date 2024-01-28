#include <stdio.h>
#include <math.h>
int binary(int num){
    int bin = 0;
    for(int i=0;num>0;i++){
        if(i==0){
            bin = num % 2;
        }
        else{
            bin = bin+(int)pow(10,i) * (num % 2);
        }
        num=num/2;
    }
    return bin;
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int bin = binary(num);
    printf("The binary number is: %d",bin);
}