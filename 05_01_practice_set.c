#include<stdio.h>
int avg(int a,int b,int c);
int main()
{
    int x,y,z,c;
    printf("enter the value of x :\n");
    scanf("%d",&x);
    printf("enter the value of y:\n");
    scanf("%d",&y);
    printf("enter the value of z:\n");
    scanf("%d",&z);
    c=avg(x,y,z);
    printf("the average of three number is %d\n",c);
    return 0;
}
int avg(int a,int b,int c)
{
    int sum;
    sum=(a+b+c)/3;
    return sum;
}