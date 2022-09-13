#include<Stdio.h>
int func(int b){
    printf("the value inside func is %d\n",b);
    printf("the address of the b is %d\n",&b);
    return b*10;
}
int main(){
    int b=4;
    printf("the address of the b is %d\n",&b);
    int val= func(b);
    int *ptr=&val;
    printf("the value of the func is %d\n",val);
    return 0;
}