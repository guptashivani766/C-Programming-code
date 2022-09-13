#include<stdio.h>
void display();//function prototype
int main()
{
    int a;
    printf("initializing display function\n");
    display();//function call
    printf("display function finished its works\n");
    return 0;
}
void display()//function definition
{
    printf(" this is display\n");
}