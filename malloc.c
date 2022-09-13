#include <stdio.h>
#include <stdlib.h> //library include for using dynamic memory allocation
int main()
{
    //use of malloc
    int *ptr;
    int n;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter the value no %d of the array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("the value at %d of this array is %d \n",i,ptr[i]);
        
    }
    return 0;
}