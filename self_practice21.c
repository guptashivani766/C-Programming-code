// call by refrence
#include<stdio.h>
void sum(int *, int *);
int main()
{
    int x=4,y=7;
    sum(&x,&y);
    printf("x is %d , y is %d\n",x,y);
}
void sum(int *x,int *y){
    *x=6;
    *y=8;
    printf("x is %d , y is %d\n",*x,*y);
}