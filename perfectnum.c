#include <stdio.h>

void perfect(int num){
    int sum = 0;
    for(int i = 1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("%d\n",num);
    }
}

void range(int lower, int upper){
    printf("The perfect numbers are: \n");
    for(int i = lower;i<=upper;i++){
        perfect(i);
    }
}

int main(){
    int lower,upper;
    printf("Enter the range: ");
    scanf("%d %d",&lower,&upper);
    range(lower,upper);
}