#include <stdio.h>
int main(){
    float bp;
    float da, hra, pf, gp;
    scanf("%f",&bp);
    if(bp>=0){
        da = 0.8*bp;
        hra = 0.3*bp;
        pf = 0.12*bp;
        gp = bp+da+hra-pf;
        printf("Rs %.2f", gp);
    } 
    else{
        printf("invalid entry");
    }
}