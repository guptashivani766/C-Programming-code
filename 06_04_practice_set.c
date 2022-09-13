#include<stdio.h>
int sum(int *a,int *b);
float avg(int *a,int *b);
int main()
{
    int x=5,y=8,c;
    float d;
    c=sum(&x,&y);
    d=avg(&x,&y);
    printf("the sum of x and y is %d\n",c);
    printf("the averge of x and y is %f",d);

}
int sum(int *a,int *b)
{
    return *a+*b;
}
float avg(int *a,int *b)
{
    return (*a+*b)/2;
}