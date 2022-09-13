#include<stdio.h>
union student{
    int roll_no;
    float marks;
    char name[20];
};
void main()
{
    union student s1;
    s1.roll_no=1;
    s1.marks=98;
    s1.name="shivani";
    printf("info for s1");
    printf("\n %d %f %s",s1.roll_no,s1.marks,s1.name);
    

}
