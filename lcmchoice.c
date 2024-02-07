#include <stdio.h>

void lcm(int num1,int num2){
    int higher;
    if(num1>num2){
        higher = num1;
    }
    else{
        higher = num2;
    }
    for(int i = higher;i<=num1*num2;i++){
        if(i%num1==0 && i%num2==0){
            printf("%d",i);
            break;
        }
    }
}

int main(){
    int choice;
    int num1,num2;
    scanf("%d",&choice);
    if(choice == 1){
        scanf("%d",&num1);
        if(num1<0){
            printf("Negative number entry not allowed");
        }
        else{
            lcm(num1,25);
        }
    }
    else if(choice==2){
        scanf("%d",&num1);
        scanf("%d",&num2);
        if(num1<0 || num2<0){
            printf("Negative number entry not allowed");
        }
        else{
            lcm(num1,num2);
        }
    }
}
