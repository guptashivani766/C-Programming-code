#include<stdio.h>
#include<string.h>
struct student{
    int id;
    int marks;
    char fav_char;
    char name[34];
};//harry,ravi,shubham // aise bhi use kar sakte hai
// struct student harry,ravi,shubham; //here structure is a global variable we use this any where
int main()
{
    struct student harry,ravi,shubham;//here structure is local variable here we use this inside the function 
    harry.id=1;
    ravi.id=2;
    shubham.id=3;
    harry.marks=366;
    ravi.marks=466;
    shubham.marks=266;
    harry.fav_char='p';
    ravi.fav_char='p';
    shubham.fav_char='p';
    strcpy(harry.name,"harry potter student of the year");
    printf("harry got %d marks \n",harry.marks);
    printf("harry's mame is: %s  \n",harry.name);
    printf("harry got %d marks \n",harry.id);
    printf("harry got %d marks \n",harry.fav_char);
    printf("harry got %d marks \n",ravi.marks);
    printf("harry got %d marks \n",ravi.id);
    printf("harry got %d marks \n",ravi.fav_char);
    printf("harry got %d marks \n",shubham.marks);
    printf("harry got %d marks \n",shubham.id);
    printf("harry got %d marks \n",shubham.fav_char);
    return 0;
}