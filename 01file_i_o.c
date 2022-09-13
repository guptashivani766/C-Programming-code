#include<stdio.h>
int main(){
    FILE *ptr=NULL;
    // ptr=fopen("myfile.txt","r");        //write this statement for using fgetc and fgets
    // ptr=fopen("myfile.txt","w");        
    // ptr=fopen("myfile.txt","a");        //write this statement for using fputc and fputs
    // ptr=fopen("myfile.txt","r+");
    // ptr=fopen("myfile.txt","w+");
    ptr=fopen("myfile.txt","a+");
    
    //****use of fgetc 

    // char c=fgetc(ptr);
    // printf(" the character I read was %c\n",c);
    //  c=fgetc(ptr);
    // printf(" the character I read was %c\n",c);

    //***use of fgets

    // char str[68];
    // fgets(str,4,ptr);
    // printf("the string  I read was : %s\n",str);

    //use of fputc

    // fputc('o',ptr);
    // fputs("this is shivani\t",ptr);
    // fclose(ptr);
    return 0;
}