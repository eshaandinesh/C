#include <stdio.h>
int main(){
    int x,y;
    printf("Enter coordinates x and y: ");
    scanf("%d %d",&x,&y);
    if(x>0){
        if(y>0){
            printf("Point in first quadrant");
        }
        else if(y<0){
            printf("Point in fourth quadrant");
        }
    }
    else if(x<0){
        if(y>0){
            printf("Point in second quadrant");
        }
        else if(y<0){
            printf("Point in third quadrant");
        }
    }
    else{
        printf("Point at origin");
    }
}