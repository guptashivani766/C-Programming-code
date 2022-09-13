#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    printf("the sum of %d natural no. is %d\n",n,sum);
}