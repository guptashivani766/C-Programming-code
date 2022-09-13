#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;i++;
    }
    printf("sum %d natural no. is %d\n",n,sum);
    return 0;
}