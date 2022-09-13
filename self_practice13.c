#include<stdio.h>
int main()
{
    int c;
    int a=10,b=9;
    int *p,*q;
    p=&a;
    q=&b;
    c=*q;
    printf("value of a is %d\n",a);
    printf("value of a is %d\n",*p);
    printf("address of a is %d\n",p);
    printf("address  of a is %d\n",&a);
    printf("c=%d\n",c);
    *p=20;
    printf("%d",a);
    printf("%x",p);//x means address of p in hexadecimal form
    return 0;
}