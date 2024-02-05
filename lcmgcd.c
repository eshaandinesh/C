#include <stdio.h>
int lcm(int arr[]){
    for(int i = 2;i<=315;i++){
        if(i%arr[0]==0 && i%arr[1]==0 && i%arr[2]==0 && i%arr[3]==0 && i%arr[4]==0 && i%arr[5]==0 && i%arr[6]==0){
        return i;
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

    int even[7] = {1,1,1,1,1,1,1};
    int odd[7] = {1,1,1,1,1,1,1};
    int dig;
    int j = 0;
    int k = 0;
    for(int i = 0; reg[i]!='\0';i++){
        if((int)reg[i]>=49 && (int)reg[i]<=57){
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
    int lcm1 = lcm(even);
    printf("%d\n",lcm1);
    int lcm2 = lcm(odd);
    printf("%d\n",lcm2);
    int gcd1 = gcd(lcm1,lcm2);
    printf("%d",gcd1);
}
