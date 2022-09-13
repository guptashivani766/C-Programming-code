#include<stdio.h>
int increase(int a);
int main()
{
    int x=1,c;
    c=increase(x);
    printf("the value of x is %d\n",c);
    return 0;
}
int increase(int a)
{
  
  return 10*a;
  }