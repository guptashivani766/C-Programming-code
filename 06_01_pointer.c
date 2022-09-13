#include<stdio.h>
int main()
{
    int i=8,*j;
    j=&i;
    printf("add i=%u\n",&i);
    printf("add i=%u\n",j);
    printf("add j=%u\n",&j);
    printf("value i=%u\n",i);
    printf("value i=%u\n",*(&i));
    printf("value j=%u\n",j);
    printf("value j=%u\n",*(&j));
    return 0;

}