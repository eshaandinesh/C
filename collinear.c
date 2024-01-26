#include <stdio.h>
#include <math.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    float dist1,dist2,dist3;
    printf("Enter coordinates x and y of point 1: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter coordinates x and y of point 2: ");
    scanf("%d %d",&x2,&y2);
    printf("Enter coordinates x and y of point 3: ");
    scanf("%d %d",&x3,&y3);
    dist1 = sqrtf(powf((x2-x1),2)+powf((y2-y1),2));
    dist2 = sqrtf(powf((x3-x2),2)+powf((y3-y2),2));
    dist3 = sqrtf(powf((x1-x3),2)+powf((y1-y3),2));
    if(dist1+dist2==dist3 || dist2+dist3==dist1 || dist1+dist3==dist2){
        printf("They are collinear");
    }
    else{
        printf("They are not collinear");
    }
}
