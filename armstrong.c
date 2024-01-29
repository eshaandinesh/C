#include <stdio.h>
#include <math.h>
int main(){
    int num;
    int sum = 0;
    scanf("%d", &num);
    if(num>1){
        for(int i = num ; i > 0 ; i /= 10){
            sum+= pow(i % 10,3);
        }
        if(sum==num) { 
            printf("Yes");
        }
        else{ 
            printf("No");
        }
    }
    else{ 
        printf("Invalid entry");
    }
}