#include<stdio.h>
int main()
{
    int marks[4];//allocate space for 4 integer
    printf("enter the value of marks for students 1:");
    scanf("%d",&marks[0]);
    printf("enter the value of marks for students 2:");
    scanf("%d",&marks[1]);
    printf("enter the value of marks for students 3:");
    scanf("%d",&marks[2]);
    printf("enter the value of marks for students 4");
    scanf("%d",&marks[3]);
    printf("enter the value of marks for students 5:");
    scanf("%d",&marks[4]);

    printf("you have entered %d %d %d %d and %d",marks[0],marks[1],marks[2],marks[3],marks[4]);

    
    return 0; 
}