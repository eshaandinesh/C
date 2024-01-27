#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int arr1[r][c];
    printf("Enter the elements of matrix 1:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    
    int arr2[r][c];
    printf("Enter the elements of matrix 2:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr1[i][j]!=arr2[i][j]){
                printf("Not identical");
                count++;
                break;
            }
        }
        if(count!=0)
            break;
    }
    if(count==0){
        printf("Identical");
    }
}