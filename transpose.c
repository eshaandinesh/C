#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int arrt[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arrt[j][i]=arr[i][j];
        }
    }

    printf("transposed matrix: \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arrt[i][j]);
        }
        printf("\n");
    }
}