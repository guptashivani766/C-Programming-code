#include <Stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a,b;
    char *ptr;
    while (i < 3)
    {
        printf(" employee %d \n:enter the number of charcters in your employee id \n",i+1);
        scanf("%d",&chars);
        ptr=(char*)malloc((chars+1)*sizeof(char));
        printf("enter your employee id\n");
        scanf("%s",ptr);
        printf("your employee id is %s\n",ptr);
        free(ptr);
        i = i + 1;
    }
    return 0;
}