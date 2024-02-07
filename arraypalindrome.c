#include <stdio.h>
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int a[size];
    int b[size];
    int c[size];
    int num,num2;
    int sum = 0;
    printf("Enter a elements: \n");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter b elements: \n");
    for(int i = 0;i<size;i++){
        scanf("%d",&b[i]);
    }
    printf("c elements: \n");
    for(int i = 0;i<size;i++){
        c[i] = a[i]+b[i];
        printf("%d\n",c[i]);
        num = c[i];
        num2 = 0;
        while(num>0){
            num2 = num2*10 + num%10;
            num = num/10;
        }
        if(c[i]==num2){
            sum += c[i];
        }
    }
    printf("Sum = %d",sum);
}
