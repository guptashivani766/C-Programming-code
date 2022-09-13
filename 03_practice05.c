#include<stdio.h>
int main ()
{
    //97-122=a-z ASCII VALUES
    char ch;
    printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97)
    {
        printf("%c is the lowercase");
    }
    else
    {
        printf("%c is the not  lowercase");
    }
    return 0;

}
