#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("The elements are:\n");
    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    
    int a = 0;
    int b = n-1;
    int temp = 0;
    while(a<b){
        if(arr[a]>0 && arr[b]<0){
            temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            a++;
            b--;
        }
        else{
            if(arr[a]<0)
                a++;
            if(arr[b]>0)
                b--;
        }
    }
    printf("\nThe elements are:\n");
    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);

    return 0;
}
