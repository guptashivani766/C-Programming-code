#include <stdio.h>
int main()
{
    //prime number =a prime number is a natural number greater than 1 that is not a product of two smaller natural number.
    //disclamer:this is not the best method to solve this problems
    int n = 2, prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 )
        {
            prime = 0;
            break;
        }
    }
        if (prime == 0 )
        {
          printf("this is not a prime number");
        }
        else
        {
        printf("this is the prime number");
        }
    return 0;
}