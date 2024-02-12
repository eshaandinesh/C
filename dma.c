#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr;
    float x;
    ptr = (float*)malloc(9*4);
    for(int i =0;i<9;i++){
        scanf("%f",ptr+i);
        
    }
    ptr = (float*)realloc(ptr,11*4);
    for(int i = 9;i>=0;i--){
        *(ptr+i) = *(ptr+i-1);
    }
    *ptr = (*(ptr+1))+(*(ptr+9));
    *(ptr+10) = (*(ptr+1))*(*(ptr+9));
    for(int i =0;i<11;i++){
        printf("%f ",*(ptr+i));
    }
}
