#include <stdio.h>
int main(){
    char string[100];   
    int count = 0;
    scanf("%[^\n]s",string);
    for(int i = 0; string[i]!= '\0';i++){
        if((int)string[i]==32){
            printf("\n");
            count++;
        }
        else{
            printf("%c", string[i]);
        }
    }
    count++;
    printf("\n%d",count);
}