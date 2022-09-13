#include<stdio.h>
int main()
{
    int a=5,*ptr;
    ptr=&a;
    // printf("the address of variable a is %u\n",&a);
    // printf("the value of variable a is %d\n",*(&a));
    // printf("the value of variable a is %d\n", a);
    printf("the value of variable a is %d\n",a);
    printf("the address of variable a is %u\n",ptr);
    printf("the value of variable a is %d\n",*ptr);
    return 0;
}