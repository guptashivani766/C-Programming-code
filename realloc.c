#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *ptr;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("the value of %d in the array is \n",i);
        scanf("%d",&ptr[i]);
        
    }
    for(int i=0;i<n;i++){
        printf("the value of %d in the array is%d \n",i,ptr[i]);
       

    }
    

    //use of realloc
    printf("enter the size of new  array\n");
    scanf("%d",&n);
    ptr=(int *)realloc(ptr,n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("the value of %d in the array is \n",i);
        scanf("%d",&ptr[i]);
        
    }
    for(int i=0;i<n;i++){
        printf("the new value of %d in the array is%d \n",i,ptr[i]);
     }
     
    return 0;
}