#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a = sum(3,5);
    printf("sum is ::%d",a);
}
int sum(int a,int b){
    int sum=0;
    sum=a+b;
    return sum;
}