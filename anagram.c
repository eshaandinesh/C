#include <stdio.h>
#include <string.h>
int main(){
    char string1[100], string2[100];
    printf("Enter string 1: ");
    scanf("%s",string1);
    printf("Enter string 2: ");
    scanf("%s",string2);
    char temp;
    if(strlen(string1)==strlen(string2)){
        for(int i = 0;string1[i]!='\0';i++){
            for(int j = 0;string1[j]!='\0';j++){
                if(string1[j]<string1[i]){
                    temp = string1[j];
                    string1[j] = string1[i];
                    string1[i] = temp;
                }
                if(string2[j]<string2[i]){
                    temp = string2[j];
                    string2[j] = string2[i];
                    string2[i] = temp;
                }
            }
        }
        if(strcmp(string1,string2)==0){
            printf("Anagram");
        }
        else{
            printf("Not an anagram");
        }
    }
    else{
        printf("Not an anagram");
    }
}