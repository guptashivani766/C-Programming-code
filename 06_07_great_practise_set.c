#include<stdio.h>
int increase(int *a);
int main()
{
    int x=1,c;
    increase(&x);
    printf("the value of x is %d\n",x);
    return 0;
}
int increase(int *a)
{
  *a=*a*10;
}