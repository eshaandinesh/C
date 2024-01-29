#include <stdio.h>
int main(){
    int marks;
    scanf("%d", &marks);
    marks = (marks-1)/10;
    switch(marks) {
        case 10:
        case 9:
            printf("0");
            break;
        case 8:
            printf("A");
            break;
        case 7:
        case 6:
            printf("B");
            break;
        case 5:
            printf("C");
            break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("F"); 
            break;
        default:
            printf("Invalid Entry");
    }
}
