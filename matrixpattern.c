#include <stdio.h>
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size][size];
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>10)
                arr[i][j] = 0;
        }
    }
    printf("\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(j>=i)
                printf("%d ",arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}
