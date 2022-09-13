#include<stdio.h>
int factorial(int x);
int main()
{
    int n,c;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    c=factorial(n);
    printf("the factorial of %d is %d\n",n,c);
    return 0;
   
}
int factorial(int x)
{int f;
printf("calling factorial %d \n",x);
    if(x==1||x==0)
    {
        return 1;
    }
    else{
        f=x*factorial(x-1);
        return f;
    }
}