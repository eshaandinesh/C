#include <stdio.h>
int main(){
    char reg[10];
    int count[10] = {0,0,0,0,0,0,0,0,0,0};
    scanf("%s",reg);
    for(int i = 0;reg[i]!='\0';i++){
        if(reg[i]>='0' && reg[i]<='9'){
            count[(int)reg[i]-48]++;
        }
    }
    for(int i = 0;i<10;i++){
        printf("%d %d\n",i,count[i]);
    }
    return 0;
}
