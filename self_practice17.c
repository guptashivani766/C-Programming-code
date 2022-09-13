#include<stdio.h>
int main()
{
    int a=10;
    int *p,**q,***r;
    p=&a;
    q=&p;
    r=&q;
    printf("the value of a is %d %d %d %d",a ,*p,**q,***r);
}