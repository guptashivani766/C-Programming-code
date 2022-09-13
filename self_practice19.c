#include<stdio.h>
void sum(int , int);
void main(){
    sum(3,5);
}
void sum(int a,int b){
    int sum=0;
    sum=a+b;
    printf("sum::%d",sum);
}