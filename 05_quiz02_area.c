#include<stdio.h>
int area(int a);
int main()
{ 
    int c;
    c=area(2);
    printf("the area of the square is %d\n",c);
    return 0;
}
int area(int a)
{
    int b;
    b=a*a;
    return b;
}