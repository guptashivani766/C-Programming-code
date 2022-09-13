#include<stdio.h>
void arrrayrev(int arr[],int start ,int end){
    while(start<end){
        int temp =arr[start];
         arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
    printf("%d",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n);

    arrayrev(arr,0,n-1);
    printf(arr,n);
     
    return 0;
}