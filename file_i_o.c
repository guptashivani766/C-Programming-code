#include<stdio.h>
int main(){
    FILE *ptr=NULL;
    char string[64]="this content was profuced by file_i_o.c";

    //****READING A FILE

    // ptr=fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("the content of this file has %s\n",string);

    //****WRITING TO A FILE
    // ptr=fopen("myfile.txt","w");//delete the previous string
    ptr=fopen("myfile.txt","a");//write the string after previous string
    fprintf(ptr,"\n%s",string);

    return 0;
}