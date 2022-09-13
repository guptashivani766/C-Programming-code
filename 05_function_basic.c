#include<stdio.h>
int sum(int a,int b);//function prototype
int main()
{
    int c;
    c=sum(3,5);//function call
    printf("The value of c is %d\n",c);
    return 0;
}
int sum(int a ,int b)//definition of sum function
{
    int c;//this c is different
    c=a+b;
    return c;
}
//the write in the function definition is differ from the c used inside the main function
// we use same declaration in the function and main