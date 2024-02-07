#include <stdio.h>
void ugly(int num){
    int pf[num/2];
    int c = 0;
    int k = 1;
    for(int i = 2;i<=num/2;i++){
        for(int j = 2;j<=i/2;j++){
            if(i%j==0){
                k = 0;
                break;
            }
        }
        if(k==1){
            if(num%i==0){
                pf[c] = i;
                c++;
            }
        }
        else{
            k = 1;
        }
    }
    pf[c] = '\0';
    for(int i = 0;pf[i]!='\0';i++){
        if(pf[i] != 2 && pf[i] != 3 && pf[i] != 5){
            printf("%d is not an ugly prime number\n",num);
            k = 5;
            break;
        }
    }
    if(k!=5){
        printf("%d is an ugly prime number\n",num);
    }
}

int main(){
    int num;
    scanf("%d",&num);
    int num1 = num/100;
    int num2 = num%100;
    ugly(num1);
    ugly(num2);
}
