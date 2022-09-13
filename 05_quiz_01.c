#include <stdio.h>
void Good_morning();
void Good_evening();
void Good_night();
void Good_morning()
{
    printf("Good morning\n");
}

void Good_evening()
{
    printf("Good evening\n");
}

void Good_night()
{
    printf("Good night\n");
}
int main()
{
    printf("finction initialise\n");
    Good_morning();
    Good_evening();
    Good_night();
    printf("function finished the work\n");
    return 0;
}
