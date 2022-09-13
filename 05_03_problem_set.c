#include <stdio.h>
float force(float mass); 
int main()
{
    float m, f;
    printf("enter the value of mass in kg\n");
    scanf("%f", &m);
    f = force(m);
    printf("the value of force is %f\n", f);

    return 0;
}
float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;
}