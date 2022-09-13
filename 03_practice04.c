#include<stdio.h>
int main()
{//Q.4
    // int year;
    // printf("enter the year:\n");
    // scanf("%d",&year);
    // if(year % 4 == 0 &&  year % 400 == 0 && year % 100 !=0 )
    // {
    //     printf(" %d is leap year",year); //starting two digit disible

    // }
    // else{

    // printf("%d is not a leap year",year);
    // }
     //OR ALSO WRITE LIKE THIS TYPE

    int year;
    printf("enter the year:\n");
    scanf("%d",&year);
    if(year % 400 ==0)
    {
        printf("%d  is leap year",year);
    }
    else if (year % 4== 0)
    {
        printf("%d is a leap year",year);
    }
    else if (year % 100 == 0)
    {
        printf("%d not a leap year",year);
    }
    else
    {
        printf("%d not a leap year",year);
    }
    return 0;
}