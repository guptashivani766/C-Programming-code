#include<stdio.h>
struct student{
    int roll_no;
    char name[20];
    float marks;
};
struct student s1={1,"shivani",90};
struct student s2;
void main()
{
    s2=s1;
    printf("info for s1");
    printf("\n %d %s %f",s1.roll_no,s1.name,s1.marks);
    printf("\ninfo for s2");
    printf("\n %d %s %f",s2.roll_no,s2.name,s2.marks);

}
