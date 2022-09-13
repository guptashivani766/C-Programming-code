#include<stdio.h>
int myfunc(int a, int b){
    static int sum;
    sum=a+b;
    sum++;
    return sum;
}
int main(){
 int sum=myfunc(3,5);
 printf("%d",sum);
  sum=myfunc(3,5);
 printf("%d",sum);
}