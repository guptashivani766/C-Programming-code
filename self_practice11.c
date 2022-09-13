#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="shivani gupta";
    int i;
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i]=s1[i]-32;
        }
    }
    printf("change lower case into upper case is %s",s1);
    
}