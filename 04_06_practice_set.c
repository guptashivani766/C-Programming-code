#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    for (i = 1; i <= 10; i++)
    {

        {
            j = 8 * i;
            sum = sum + j;
        }
    }
    printf("the sum of the multiplication of table 8 is %d\n", sum);
    return 0;
}