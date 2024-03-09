#include<stdio.h>
struct book {
    char bname[50], aname[50];
    int cost;
};

void input(struct book* b){
    printf("Enter book name : ");
    scanf(" %[^\n]s", b->bname);
    printf("Enter author name : ");
    scanf(" %[^\n]s", b->aname);
    printf("Enter cost : ");
    scanf(" %d", &b->cost);
}
void display(struct book b1){
    printf("\nBook Name : %s\nAuthor Name : %s\nCost : %d\n", b1.bname, b1.aname, b1.cost);
}

int Min(struct book b[], int n){
    int min = 0;
    for(int i = 0; i < n; i++){
        if(b[i].cost<b[min].cost)
            min = i;
    }
    return min;
}

int Max(struct book b[], int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        if(b[i].cost>b[max].cost)
            max = i;
    }
    return max;
}

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d",&n);
    struct book b[n];

    for(int i = 0; i < n; i++)
        input(&b[i]);
    
    for(int i = 0; i < n; i++)
        display(b[i]);

    printf("\nMin cost\n");
    int min = Min(b,n);
    display(b[min]);

    printf("\nMax cost\n");
    int max = Max(b,n);
    display(b[max]);

    return 0;
}
