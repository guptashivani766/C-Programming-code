#include<stdio.h>
#include<stdlib.h>
//use of calloc
int main(){
    int *ptr;
    int n;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf(" enter the value of array is %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("the value of %d in the array is %d\n",i,ptr[i]);
    }

    return 0;

}