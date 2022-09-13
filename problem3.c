//check the number wheather it is odd or even without using arithmetic and relational operator
#include<stdio.h>
int main()
{
    int a=5;
    if(a&1)
    {
        printf("it is an odd number\n");
    }
    else {
        printf("it is an even number\n");
    }
    
    (a&1)? printf("odd") : printf("even");
}