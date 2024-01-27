#include <stdio.h>
int main(){
    char string[100];
    printf("Enter the string: ");
    scanf("%s",&string);
    char swap[100];
    for(int i = 0;string[i]!='\0';i++){
        if((int)string[i]>=65 && (int)string[i]<=90){
            swap[i] = (char)((int)string[i]+32);
        }
        else if((int)string[i]>=97 && (int)string[i]<=122){
            swap[i] = (char)((int)string[i]-32);
        }
        else{
            swap[i] = (char)((int)string[i]);
        }
    }
    printf("%s",swap);
}