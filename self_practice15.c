#include<stdio.h>
int main()
{
    int a=10,b=9;
    int *p,*q;
    p=&a;
    q=p;
    printf("value of a is %d %d %d",a,*p,*q);
}