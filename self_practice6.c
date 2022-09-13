#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int count;
    printf("enter the string");
    gets(name);
    puts(name);
    count=strlen(name);
    printf("the length of string is %d",count);

}