#include<stdio.h>
int sum(int n);
int main()
{
    int num,s;
    printf("enter the value of number:\n");
    scanf("%d",&num);
    s=sum(num);
    printf("the sum of n natural no. is %d",s);
    return 0;
}
int sum(int n)
{
    int summ=0,i;
    for(i=1;i<=n;i++)
    {
        summ=summ+i;
    }
    return summ;
}