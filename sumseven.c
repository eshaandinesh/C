#include <stdio.h>
int main(){
    for(int i = 16;i<=95;i++){
        int sum = i/10 + i%10;
        if(sum%7==0){
            printf("%d ",i);
        }
    }
}
