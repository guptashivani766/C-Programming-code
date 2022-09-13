#include<stdio.h>
int main(){
    // int *a,b;
    typedef int* intpointer;
    intpointer a,b;
    int c=89;
    a=&c;
    b=&c;
    return 0;
}