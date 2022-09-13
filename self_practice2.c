#include<stdio.h>
int main(){
    int  ch;
    int a ,b;
    printf("enter the value a and b\n");
    scanf("%d %d",&a,&b);
    printf("enter  ch\n");
    scanf("%d",ch);
    switch(ch)
    {
        case 1:{
        printf("sum is :",a+b);
        break;
        } 

        case 2:{
         printf("substraction is :",a-b);
         break;
        } 

        case 3:{
        printf("multiplication is :",a*b);
        break;
        }

        case 4:{
        printf("division is :",a/b);
        break;
        } 
        
        default:{
            printf("error");
            
        }
    }
        printf("end program");

        return 0;
}