#include <stdio.h>
void input(int *p,int size){
  printf("Enter the elements:\n");
  for(int i =0;i<size;i++){
    scanf("%d",p+i);
  }
  printf("\nElements");
  for(int i =0;i<size;i++){
    printf("\n%d",*(p+i));
  }
}

int max(int *p,int size){
  int m = *p;
  for(int i = 0;i<size;i++){
    if(*(p+i)>m){
      m = *(p+i);
    }
  }
  return m;
}

int main(){
  int size;
  printf("\nEnter the size: ");
  scanf("%d",&size);
  int arr[size];
  input(arr,size);
  int max_num = max(arr,size);
  printf("\nMax = %d",max_num);
}
