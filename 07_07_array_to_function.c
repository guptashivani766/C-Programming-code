#include<stdio.h>
// void printArray(int *ptr,int n)
// {
//     for(int i=0;i<n;i++)
//     printf("the value of element %d is %d\n",i+1,*(ptr+i));
// }

//both above and below declaration are same
void printArray(int ptr[],int n)
{
    for(int i=0;i<n;i++)
    {
    printf("the value of element %d is %d\n",i+1,ptr[i]);
    }
    ptr[2]=555;//this value will be change arr array of main as well
}

int main()
{
  int arr[]={ 1,3,5,6,7};
  printArray(arr,5);
  printf("%d",arr[2]);
  return 0;
  
}