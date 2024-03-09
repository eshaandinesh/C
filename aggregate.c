#include <stdio.h>

struct Student{
    char name[50];
    char reg[10];
    int da1,da2,quiz,cat1,cat2,fat;
};

float Calculate(struct Student s){
    return (s.da1+s.da2+s.quiz+s.cat1*0.3+s.cat2*0.3+s.fat*0.4);
}

void display(struct Student s,float agg){
    printf("%s\n%s\n%.1f\n",s.name,s.reg,agg);
    if(agg>50 && s.fat>40){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
}

int main(){
    struct Student s;
    scanf("%s",s.name);
    scanf("%s",s.reg);
    scanf("%d",&s.da1);
    scanf("%d",&s.da2);
    scanf("%d",&s.quiz);
    scanf("%d",&s.cat1);
    scanf("%d",&s.cat2);
    scanf("%d",&s.fat);
    float agg = Calculate(s);
    display(s,agg);
    
    return 0;
}
