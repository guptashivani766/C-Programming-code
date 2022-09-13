//no argument with return type
#include<stdio.h>
int sum(void);
int main(){
    int s=sum();
    printf("sum =%d",s);
}
int sum(){
    int a=6,b=8;
    return a+b;
}