#include<stdio.h>

int myfunc(int a ,int b){
    extern int sum;
    // int sum;
    // sum=a+b;
    return sum;
}
int sum =343;
int main(){
    //declaration: telling the compiler about the variable (no space reserved)
    //definition:  declaration + space reservation
    int sum=myfunc(3,5);
    // int sum=98;
    printf("%d",sum);
    return 0;
}