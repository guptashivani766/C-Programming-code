#include<stdio.h>
#include<math.h> //add for using function pow
int main()
{
    // the a and b is operand and +,-,*,/ is operators
    // int z;b*c=z; illegal 
    int a=4,b=6;
    printf("the value of a+b is:%d\n",a+b);
    printf("the value of a*b is:%d\n",a*b);
    printf("the value of a-b is:%d\n",a-b);
    printf("the value of a/b is:%d\n",a/b);
    printf("the value of a%b is:%d\n",a%b);
    // printf("the value of a^b is:%d\n",a^b);//not the a to the power b this is wrong
    // no operator is assumed to be present
    // this is not multiply the 4 and 5
    // printf ("%d",(4)(5));
    // use the function pow(4,5)
    printf("the value of a^b is:%d\n",pow(4,5));
    printf("the value of a^b is:%f\n",pow(4,5));

    printf("the value of 6+5 is %d\n",6+5);//sum of integer and inter is integer
    printf("the value of 6+5.6 is %f\n",6+5.6); //sum of integer and  float is float
    printf("the value of 6.1+5.6 is %f",6.1+5.6); //sum of float and float is float

    printf("%f\n",5/2);
    printf("%f\n",5.0/2);// make float numerator if u want to float result
    printf("%f",5/2.0); //make float denominator if u want to float result

    return 0;
    }