#include<stdio.h>
int main()
{int i=345,*j,**k;
j=&i;
k=&j;
printf("the value of i is %d",**k);

}