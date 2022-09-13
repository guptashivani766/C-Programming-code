#include<stdio.h>
union student
{
    int roll_no;
    char name;
    float marks;
};
int main(){
 union student u ;
u.roll_no=2;
//u.name=67;
//u.marks=90.5;
printf("%d",u.roll_no);
//printf("\n%c",u.name);
//printf("\n%f",u.marks);
}