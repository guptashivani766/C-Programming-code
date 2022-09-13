#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    printf("the random number before o to100 is %d\n",rand()%3);
    return 0;
}
