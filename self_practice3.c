#include<stdio.h>
int main()
{
    char name[10];
    printf("enter the name");
    //scanf("%s",name);//scanf function can not considered space 
    gets(name);
    printf("%10.5s\n",name);   
    printf("%0.5s\n",name);   
    puts(name);//puts function  automatic set as next line
    puts(name);
    printf("%s\n",&name);
    printf("%s",&name[3]);
    return 0;
}