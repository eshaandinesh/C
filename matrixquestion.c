#include <stdio.h>
int main(){
    int row1,col1,row2,col2;
    scanf("%d %d",&row1,&col1);
    scanf("%d %d",&row2,&col2);
    if(col1==row2){
        if(row1==col2){
            int mat1[row1][col1];
            int mat2[row2][col2];
            for(int i = 0; i<row1;i++){
                for(int j = 0;j<col1;j++){
                    scanf("%d",&mat1[i][j]);
                    //printf("%d ",mat1[i][j]);
                }
                //printf("\n");
            }
            printf("\n");
            for(int i = 0;i<row2;i++){
                for(int j = 0;j<col2;j++){
                    scanf("%d",&mat2[i][j]);
                    //printf("%d",mat2[i][j]);
                }
                //printf("\n");
            }
            //printf("\n");
           
            int sum = 0;
            int c = 0;
            for(int i=0;i<row1;i++){
                for(int j =0;j<row1;j++){
                    for(int k = 0;k<col1;k++){
                        sum+= mat1[i][k]*mat2[k][j];
                    }
                   
                    if(sum%2==0){
                        c+=sum;
                    }
                    sum = 0;
                }
            }
            printf("%d",c);
        }
        else{
            printf("No");
        }
    }
    else{
        printf("Invalid");
    }
   
    return 0;
}
