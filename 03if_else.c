#include<stdio.h>
int main()
{
    int age;
    int vip_pass=0;
    // vip_pass=1;
    printf("enter the value of age:\n");
    scanf("%d",&age);
    // if (age<=70 && age>=18)
    // {
    //     printf("you can  drive");
    // }
    // else
    // {
    //     printf("you can not drive");
    // }
     if ((age<=70 && age>=18)||vip_pass==1)
    {
        printf("you can  drive");
    }
    else
    {
        printf("you can not drive");
    }
 return 0;

}