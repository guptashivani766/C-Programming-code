#include<stdio.h>
void printstring(char str[])
{
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
}
int main(){
    // char str[]={'s','h','i','v','a','n','i','\0'};
    // char str[]="shivani";
    char str[45];
    gets(str);//intput the string we use gets function present in stdio.h library
    printf("using function printstr\n");
    printstring(str);
    printf("\nusing puts: ");
    puts(str);//print the string we use puts function pressent in stdio.h library
    printf("using printf %s",str);//the is also used to print the string
    return 0;
}