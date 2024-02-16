#include <stdio.h>
int lcm(int arr[]){
    int length = 0;
    int prod = 1;
    for(int j  = 0;arr[j]!='\0';j++){
        length++;
        prod*=arr[j];
    }
    int count = 0;
    for(int i = 1 ; i <= prod ; i++){
        for(int j  = 0;arr[j]!='\0';j++){
            if(i%arr[j]==0){
                count++;
            }
        }
        if(count==length){
            return i;
        }
        else{
            count = 0;
        }
    }
}

int gcd(int lcm1,int lcm2){
    for(int i = 2;i<=lcm1*lcm2;i++){
        if(i%lcm1==0 && i%lcm2==0){
            return (lcm1*lcm2)/i;
        }
    }
}

int main(){
    char reg[10];
    scanf("%s",reg);

    int even[7];
    int odd[7];
    int dig;
    int j = 0;
    int k = 0;
    for(int i = 0; reg[i]!='\0';i++){
        if(reg[i]>='1' && reg[i]<='9'){
            dig = (int)reg[i]-48;
            if(dig%2==0){
                even[j] = dig;
                j++;
            }
            else{
                odd[k] = dig;
                k++;
            }
        }
    }
    even[j] = 0;
    odd[k] = 0;

    int lcm1 = lcm(even);
    printf("%d\n",lcm1);
    int lcm2 = lcm(odd);
    printf("%d\n",lcm2);
    int gcd1 = gcd(lcm1,lcm2);
    printf("%d",gcd1);
}
