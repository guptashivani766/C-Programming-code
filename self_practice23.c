// no argument no return type
#include<stdio.h>
void sum(void);
void sub(void);
int main()
{
    sum();
    sub();
}
void sum()
{
    int a=5,b=7,sum=0;
    sum=a+b;
    printf("sum=%d",sum);
}
void sub()
{
    int a=9,b=7,sub=0;
    sub=(a-b);
    printf("sub=%d",sub);
}
