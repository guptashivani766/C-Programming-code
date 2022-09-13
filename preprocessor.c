#include<stdio.h>
#include"null_pointer.c"
#define PI 3.14
#define SQUARE(r)r*r//macros uses
//here we can use all other fucntion that we are used in the null_pointer.c files

int main(){
    float var=PI;
    int r=4;
     printf("this is me %f\n",var);
     printf("the area of the circle is  %f\n",PI *SQUARE(r));
    return 0;
}