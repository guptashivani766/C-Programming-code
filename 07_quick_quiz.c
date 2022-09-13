#include <stdio.h>
void display(int *p);
int main()
{
    int arr[3][2], i, j;
    printf(" enter the element in the two dimension array:\n");
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    display(&arr[3][2]);
      return 0;

}
    void display(int *p)
    {int i,j;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("the two dimension array is \n");
            printf("%d",p[i][j]);
        }
    }
    }
  