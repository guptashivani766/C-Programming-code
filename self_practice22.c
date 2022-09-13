// call by value 
#include<stdio.h>
void sum(int a,int b)
{
    a=8;
    b=3;
    printf("a is %d and b is %d",a,b);
}
int main()
{
    int a=3,b=7;
    sum(a,b);
    printf("a is %d and b is %d",a,b);
}