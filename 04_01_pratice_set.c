#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("the multiplication of 2 is %d\n",n*i);
    }
}