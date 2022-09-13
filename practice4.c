#include<stdio.h>
int main()
{
    char name[]="shivani gupta";
    /*if(sizeof(int)>-1)
    {
        printf("rcpl club");
    }
    else{
        printf("creative club");
    }
    */
    printf("happy learnig\n"+7);
    //char array
    //pointer and indexing array
    //here 7 is index number
    printf("%s",&name[7]);
}
//compare -->relational operator 
//type must be same when we do comparison.
//unsigned>signed data it is not posible
//here -1=255
//4>255 false
//so it will printing creating club. 