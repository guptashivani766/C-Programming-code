#include<stdio.h>
int main()
{
    int multable[3][10];
    for(int i=0;i<10;i++)
    {
        multable[0][i]=2*(i+1);
    }
    for(int i=0;i<10;i++)
    {
        printf("2*%d = %d \n",i+1,multable[0][i+1]);
    }
    return 0;
}