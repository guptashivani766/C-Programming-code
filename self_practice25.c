//with argument no return type
#include<stdio.h>
void sum(float ,float );
int main(){
     sum(6.8,8.5);
}
void sum(float a,float b)
{
    float s=0;
    s=a+b;
    printf("sum is %f",s);
}