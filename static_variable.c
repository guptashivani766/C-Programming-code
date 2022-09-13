#include<stdio.h>
int b=34;
int func(int b1){
static int myvar=78;
printf("the value of my var is %d\n",myvar);
myvar++;
return b1+myvar;
}

int main(){
    int b=344;
    int val=func(b);
     val=func(b);
     val=func(b);
     val=func(b);
     
    int *ptr=&val;
    printf("the value of val is %d",*ptr);
    return 0;
}