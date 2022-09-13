#include<stdio.h>
int increase(int *a);
int main()
{
  int x=1;
  increase (&x);
  printf("the value of x is %d",x);
  return 0;
}
 int increase(int *a)
 {
 *a=*a*10;
 }