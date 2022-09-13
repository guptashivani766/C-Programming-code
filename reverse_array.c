#include<stdio.h>
// 1,2,3,4,5,6,7
// 7,2,3,4,5,6,1
// 7,6,3,4,5,2,1
// 7,6,5,4,3,2,1
void revarr(int arr[]){
    for(int i=0;i<7/2;i++){
    //swap item arr[i] with item arr[(6-i)]
      int temp;
      temp=arr[i];
      arr[i]=arr[6-i];
      arr[6-i]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
     printf("before reversing the array is\n");
    for(int i=0;i<7;i++){
    printf(" %d\n",arr[i]);
    }
    revarr(arr);
    printf("after reversing the array:\n");
     for(int i=0;i<7;i++){
    printf("%d\n",arr[i]);
    }    
    return 0;
    
}