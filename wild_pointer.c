#include<Stdio.h>
#include<Stdlib.h>
int main(){
    int a=334;
    int *ptr;//this is a wild pointer
    *ptr=34;// this is not a good thing to do
    ptr=&a;//ptr is no longer a wild pointer
    printf("the value of a is %d\n",*ptr);
    return 0;
}