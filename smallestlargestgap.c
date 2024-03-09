#include <stdio.h>
#include <math.h>
int largestGap(int arr[], int n){
    float max = 0;
    for(int i = 0; i<n-1;i++){
        if(fabs(arr[i]-arr[i+1])>max) 
        max = fabs(arr[i]-arr[i+1]);
    }
    return (int)max;
}

int smallestGap(int arr[], int n){ 
    float min = fabs(arr[0]-arr[1]); 
    for(int i = 0; i<n-1;i++){ 
        if(fabs(arr[i]-arr[i+1])<min)
            min = fabs(arr[i]-arr[i+1]);
    }
    return (int)min;
}

int main(){ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++) {
        scanf("%d",&arr[i]); 
        arr[i] = (int)(fabs(arr[i]));
    }
    if(n==1){ 
        printf("%d\n%d",arr[0], arr[0]); 
        return 0;
    }
    int l = largestGap(arr,n);
    int s = smallestGap(arr,n); 
    printf("%d\n%d", l, s);
    return 0;
}
