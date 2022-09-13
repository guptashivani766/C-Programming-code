#include<stdio.h>
#include<stdlib.h>
#include<String.h>
void main()
{
    int i;
    FILE *fp=NULL;
   // char ch='a';
    char str[40];
    fp=fopen("abc.txt","w");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    printf("enter the string\n");
    gets(str);
    //fputs(str,fp);
    for(i=0; i!=strlen(str);i++)
    {
        fputc(str[i],fp);
    }
    fclose(fp);

}