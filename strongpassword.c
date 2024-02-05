#include <stdio.h>
int main(){
    char pass[30];
    int len = 0;
    int alpha = 0;
    int num = 0;
    int spe = 0;
    scanf("%s",pass);
    for(int i = 0;pass[i]!='\0';i++){
        //printf("%c %d\n",pass[i],(int)pass[i]);
        len++;
        if(((int)pass[i]<=90&&(int)pass[i]>=65)||((int)pass[i]<=122&(int)pass[i]>=97)){
            alpha++;
        }
        else if((int)pass[i]<=57&&(int)pass[i]>=48){
            num++;
        }
        else if(pass[i]=='@'||pass[i]=='$'||pass[i]=='!'||pass[i]=='%'||pass[i]=='#'){
            spe++;
        }
    }
    if(alpha>0&&num>0){
        if(len<=11&&len>=9&&spe>0){
            printf("valid and strong");
        }
        else if(len<=8&&len>=6){
            printf("valid and weak");
        }
        else{
            printf("invalid");
        }
    }
    else{
        printf("invalid");
    }
    return 0;
}
