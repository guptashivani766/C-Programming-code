#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="SHIVANI GUPTA";
    int i;
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
    }
    printf("to convert upper case to lower case ::%s",s1);
}