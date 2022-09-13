#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    while(a<10)
    {
        printf("%d\n",a);
        a++;
    }
    printf(" the value of a is greater then and equal to 10");
    return 0;
}