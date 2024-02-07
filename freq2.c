#include <stdio.h>
int main(){
    char reg[10];
    int count = 0;
    char dig;
    scanf("%s",reg);
    for(int i = 0;reg[i]!='\0';i++){
        if(reg[i]>='0' && reg[i]<='9'){
            dig = reg[i];
            for(int j = i;reg[j]!='\0';j++){
                if(reg[j]==dig){
                    count++;
                    reg[j]='a';
                }
            }
            printf("%c %d\n",dig,count);
            count = 0;
        }
    }

    return 0;
}
