#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="satnam";
    char s2[]="satguru";
    char s3[54];
    /* agar dono string s1 and s2 same hone to strcmp karne par 0 return karega
    agar dono diffrent honge to :
    1)n>g return 1 or any +ve value
    2)agar s2 string upper hoti to return -1 or any -ve value*/
    
    printf("the strcmp for s2 ,s2 returned %d ",strcmp(s1,s2));

    // // puts(strcat(string1,string2));
    // printf("the length os string s1 is %d",strlen(s1));
    // printf("\nthe length os string s1 is %d",strlen(s2));
    // // printf("\nthe length os string s1 is %s",strrev(s1));
    // // printf("\nthe length os string s1 is %s",strrev(s2));
    
    // printf("\n the reverse sstring s1 is :");
    // puts(strrev(s1));
    // printf(" the reverse sstring s2 is :");
    // puts(strrev(s2));
    // strcpy(s3,strcat(s1,s2));
    // puts(s3);
    // return 0;
}