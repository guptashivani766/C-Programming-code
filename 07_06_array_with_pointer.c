#include<stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    ptr=&marks[0];
    for(int i=0;i<4;i++){
        printf("enter the value of %dth student :\n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<4;i++){
        printf(" the value of marks for students  %d is %d \n",i+1,marks[i]);
       
    }
}