#include<stdio.h>

int func()
{
    return 34;
}
int main(){
    int val=func();
    printf("the value of func is %d",val);
    return 0;
}