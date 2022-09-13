#include <stdio.h>
int main()
{
    int num;
    printf("enter the value of number:\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("yes");
    }
    else if (num == 2)
    {
        printf("not sure");
    }
    else
    {
        printf("no");
    }

    return 0;
}