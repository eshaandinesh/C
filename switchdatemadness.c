#include <stdio.h>
int main(){
    int d,m,y;
    scanf("%d %d %d",&d,&m,&y);
    switch(d){
        case 1:
        case 21:
        case 31:
            printf("%dst ",d);
            break;
        case 2:
        case 22:
        printf("%dnd ",d);
            break;
        case 3:
        case 23:
        printf("%drd ",d);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
            printf("%dth ",d);
            break;
        default:
            printf("Invalid input");
            return 0;
    }
    switch(m){
        case 1:
            printf("January, ");
            break;
        case 2:
            printf("February, ");
            break;
        case 3:
            printf("March, ");
            break;
        case 4:
            printf("April, ");
            break;
        case 5:
            printf("May, ");
            break;
        case 6:
            printf("June, ");
            break;
        case 7:
            printf("July, ");
            break;
        case 8:
            printf("August, ");
            break;
        case 9:
            printf("September, ");
            break;
        case 10:
            printf("October, ");
            break;
        case 11:
            printf("November, ");
            break;
        case 12:
            printf("December, ");
            break;
        default: 
            printf("Invalid input");
            return 0;
    }
    printf("%d",y);
}
