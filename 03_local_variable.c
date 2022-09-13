#include<stdio.h>
 int b=5;//this is a global variable since it is declared outside the main()
 int loc=7;
 int func(int b1){
    
    printf(" the value inside the func is %d",b);
    return b;
}

int main(){
    int b1=4;

    printf("the value of the b is %d",b1);
    printf("the value of the loc is %d",loc);
    int val=func(b1);
    return 0;
}
 
//  the prefrence of local variable is more than global variable 
//  local variable>>>>global variable