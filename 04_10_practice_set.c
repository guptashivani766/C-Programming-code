#include<stdio.h>
int main()
{
    int n,i,j,prime=1;
    printf("enter the value of j:\n");
    scanf("%d",&j);
    n=j;
    do{
        if(n%i==0)
        {
        
            prime=0;
            break;
        }
    }while(i<n);

        if(prime==0)
        {
            printf("this is not a prime no.");
        }
        else
        {
            printf("this is a prime no.");
        }
        
 return 0;
}