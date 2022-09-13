#include<stdio.h>
int main()
{
   // for(int i=0;i<10;i++)
   // {
   //     printf("the value of i is %d \n",i);
   // }
   int n;
   printf("enter the value of n:");
   scanf("%d",&n);
   for(int i=n;i;i--)
   {
       printf("the value of i is %d \n ",i);
   }
    return 0;
}