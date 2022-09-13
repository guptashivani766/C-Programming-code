#include<stdio.h>
int main()
{//Q3
  float tax=0,income;
  printf("enter your income:\n");
  scanf("%f",&income);

  if(income>=250000 && income<=500000)
  {
      tax =tax + 0.05 *(income - 250000); //yha pe 250000 se substract isliye kiya gya hai ki 250000 tak koi tax nhi pay krna hai uske bad pay krna hoga
  }
  if(income>=500000 && income<= 1000000)
  {
      tax = tax + 0.20* (income - 500000);
  }
  if(income>=1000000)
  {
      tax = tax + 0.30 *(income - 1000000);
  }
  printf("your net income tax to be paid by 26th of this month is %f\n",tax);
  return 0;


}