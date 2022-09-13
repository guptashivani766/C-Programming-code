#include<stdio.h>
int main()
{ //Q1 
    int a=10;
    if(a=11)// =assignment operator
        printf("i am 11");

    else
        printf("i am not 11");

   return 0;
    
}
//here if ke bad '{'nhi laga hai kyuki ek statement hai agar more than one printf hota to lagna padta
//but this is not good practice so add curly bracket after if condition