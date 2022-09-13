#include<stdio.h>
// void sum();
//sum(void);   bydefault int me jayega  aur sum void returntype hai .so, error dega

void sum(void); //function declaration
int main()
{
   sum(); // function calling 
}
void sum() //function definition
{
    int sum=0;
    int a,b;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
}