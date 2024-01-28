#include <stdio.h>
int square(int num){
    return num*num;
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int sqr = square(num);
    printf("The square of the number is: %d",sqr);
}