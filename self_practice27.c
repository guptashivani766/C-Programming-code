#include<stdio.h>
int maxval(int , int);
int main()
{
    int a,b;
    printf("enter the value of a & b\n");
    scanf("%d %d",&a,&b);
    int c=maxval(a,b);
    printf("the maximum value is %d",c);
}
int maxval(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}