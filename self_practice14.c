#include<stdio.h>
int main(){
    int a=10,b=9;
    int *p;
    p=&a,&b;
    printf("p contain the address of %d\n",p);    
    printf("p contain the address of %d\n",*p);    
    p=(&a,&b);
    printf("p contain the address of %d\n",p);
    printf("p contain the address of %d\n",*p);
    return 0;
}