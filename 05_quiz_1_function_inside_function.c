#include <stdio.h>
void Good_morning();
void Good_evening();
void Good_night();
void Good_morning()//use function inside function means indirect use of function
{
    printf("Good morning\n");
    Good_evening();
    
}

void Good_evening()
{
    printf("Good evening\n");
    Good_night();
}

void Good_night()
{
    printf("Good night\n");
}
int main()
{
    printf("finction initialise\n");
    Good_morning();
    printf("function finished the work\n");
    return 0;
}
