#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char name[50];
    scanf("%[^\n]s",name);
    for(int i =0;name[i]!='\0';i++){
        if(tolower(name[i])!='a'&&tolower(name[i])!='e'&&tolower(name[i])!='i'&&tolower(name[i])!='o'&&tolower(name[i])!='u'){
            if(islower(name[i])){
                printf("%c",toupper(name[i]));
            }
            else if(isupper(name[i])){
                printf("%c",tolower(name[i]));
            }
            else{
                printf("%c",name[i]);
            }
        }
    }
}
