#include<stdio.h>
float celfaren(float celu);
int main()
{
    float cel,fehren;
    printf("enter the value of celcius\n");
    scanf("%f",&cel);
    fehren=celfaren(cel);
    printf(" celcius to farenhite is %f\n",fehren);
    return 0;
}
float celfaren(float celu)
{
    float fehrenhite;
    fehrenhite=(celu*1.8)+32;
    return fehrenhite;
}