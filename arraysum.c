#include<stdio.h>
int main()
{
    int num[5];
    int i;
    int sum=0;
    for (i=0;i<=4;i++)
    {

      printf(" Enter the value of %d element of your array \n",i);
      scanf("%d",&num[i]);

}
for (i=0;i<=4;i++)
    {

sum=sum+num[i];


    }

      printf("  Sum of the given values of array is :-  %d",sum);
    return 0;
}
