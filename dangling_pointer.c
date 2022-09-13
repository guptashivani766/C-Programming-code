#include<stdio.h>
int* functionDangling(){
    int a,b,sum;
    a=34;
    b=64;
    sum=a+b;
    return &sum;
}
int main(){
    //Case 1:deallocation of memory block
    int *ptr=(int *)malloc(7*(sizeof(int)));
    ptr[0]=34;
    ptr[1]=3;
    ptr[2]=4;
    ptr[3]=84;
    free(ptr);//ptr is now a dangling pointer

    //Case 2: function returning local variable address
    int* dangptr=functionDangling();//ptr is now a dangling pointer

    int * danglingptr3;
    //Case 3: if a variable goes out of scope
    {
        int a=22;
        danglingptr3=&a;
    }
    //here variable a goes out of scope which means danglingptr3 is pointing to a location which is freed and hence danglingptr3 is now a dangling pointer
    return 0;
}