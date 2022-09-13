#include<stdio.h>
int main()
{
    int i=1;
    printf("%d\n",i++);//first print the value then assign to increment(phle print fir increment)
    printf("%d\n",++i);//first assign to increment the value then print(phle increment fir print)
    printf("%d\n",i--);//first print the value then assign to decrement(phle print fir decrement)
    printf("%d",--i);//first assign to decrement the value then print(phle decrement fir print)
}