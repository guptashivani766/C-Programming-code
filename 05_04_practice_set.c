#include<stdio.h>
int fabinocii(int a ,int b);
int main()
{
    int x,y,fabb;
    printf("enter the value of x & y:\n");
    scanf("%d",&x);
    scanf("%d",&y);
    fabb=fabinocii(x,y);
    printf("the fabinocii series is %2d",fabb);

    return 0;
}
int fabinocii(int a,int b)
{
  int fabno;
  fabno=


}
//hint 
//fab(n)=fab(n-1)+fab(n-2);
//fab(1)=0
//fab(2)=1