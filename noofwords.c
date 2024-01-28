#include <stdio.h>
int main(){
    char string[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",string);
    int count = 0;
    int total = 0;
    for(int i = 0;string[i]!='\0';i++){
        if((int)string[i]!=32){
            count++;
        }
        if((int)string[i]==32 && count!=0){
            total++;
            count = 0;
        }
    }
    if(count!=0){
        total++;
    }
    printf("Total number of words: %d",total);
}