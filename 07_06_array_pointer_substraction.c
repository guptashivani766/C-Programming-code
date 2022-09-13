#include<stdio.h>
int main()
{
    int i=7,l=5,*k,*j,*m;
    j=&i;
    k=&l;
    printf(" the address of j and k is %u %u\n",j,k);
    m= j-k;
    printf("the value of m is %u",m);


}