#include<stdio.h>
typedef struct student{
    int id;
    int marks;
    char fav_character;
    char name[34];
}std;
int main(){
    //struct student s1,s2,s3;    
    std s1,s2,s3;    

    s1.id=34;
    s2.id=45;
    printf("value of s1 id is %d\n",s1.id);
    printf("value of s1 id is %d",s2.id);
//    // typedef<previous_name><alias_name>;
//    typedef unsigned long ul;
//    typedef int integer;
//    ul l1,l2,l3;
//    integer a=4;
//    printf("%d",a);

    return 0;
}