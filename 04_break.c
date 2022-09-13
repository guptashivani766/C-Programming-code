#include<stdio.h>
int main()
{
    // for(int i=0;i<100;i++)
    // {
    //     printf("the value of i is %d\n",i);
    //     if(i==8)
    //     {
    //         break;
    //     }
    // }
    int i=0;
    do{
        printf("the value of i is %d\n",i);
        if(i==5){
            break;
        }
        i++;
    }while(i<100);
    
}