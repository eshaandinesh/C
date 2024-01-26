#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90){
        printf("S grade");
    }
    else if(marks<=89 && marks>=80){
        printf("A grade");
    }
    else if(marks<=79 && marks>=70){
        printf("B grade");
    }
    else if(marks<=69 && marks>=60){
        printf("C grade");
    }
    else if(marks<=59 && marks>=50){
        printf("D grade");
    }
    else if(marks<=49 && marks>=40){
        printf("E grade");
    }
    else if(marks<=39 && marks>=0){
        printf("F grade");
    }
    else{
        printf("Invalid input");
    }
}