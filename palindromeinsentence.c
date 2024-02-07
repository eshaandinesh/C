#include <stdio.h>
#include <string.h>

int palin(char word[]){
    int size = strlen(word);
    if(size!=1){
        char word2[size];
        int i;
        for(i = 0;word[i]!='\0';i++){
            if(word[i]>='A' && word[i]<='Z'){
                word2[i] = word[i]+32;
            }
            else{
                word2[i] = word[i];
            }
        }
        word2[i+1] = '\0';
        
        for(int i = 0;i<size/2;i++){
            if(word2[i]!=word2[size-i-1]){
                return 0;
            }
        }

        for(int k = 0; word2[k]!='\0';k++){
            word2[k] = '\0';
        }
        printf("%s",word);
        return 1;
    }
}

int main(){
    char st[100];
    char word[20];
    int flag = 0;
    int j = 0;
    scanf("%[^\n]s",st);
    int i = 0;
    while(st[i]!='\0'){
        if(st[i]==' '||st[i]=='.'){
            flag+= palin(word);
            j = 0;
            for(int k = 0; word[k]!='\0';k++){
                word[k] = '\0';
            }
        }
        else{
            word[j] = st[i];
            j++;
        }
        i++;
    }
    if(flag == 0){
        printf("Palindrome does not exist");
    }
}
