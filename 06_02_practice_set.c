#include<stdio.h>
void printAdd(int a)
{
    printf("the address of variable a is %u",&a);
}
int main()
{
    int i=4;
    
     printf("the value of variable i is %d\n",i);
     printAdd(i);
     printf("the address of the variable i is %u\n",&i);
    return 0;
}