#include<stdio.h>
int main()
{
    int x=2,y=3;
    printf("the value of 3x-8y is :%d",3*x-8*y);
    printf("the value of 3x/8y is :%d",8*y/3*x); //if same priority operator use then associativity work there 
    //here associativity  of * and / is left to right
    // 8*3/3*2 =40/12 will give wrong answer
    //24/3*4
    //8*2
    //16

    return 0;
}

