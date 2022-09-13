#include<stdio.h>
int sum(int ,int);
int main(){
    int a,b;
    printf("enter the value of a & b\n");
    scanf("%d %d",&a,&b);
    int c =sum(a,b);
    printf("sum is %d",c);

}
int sum(int a,int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}