#include<stdio.h>
int main()
{
    int num[5];
    int i;
    int sum=0,avg;
    for (i=0;i<=4;i++)
    {

      printf(" Enter the value of %d element of your array \n",i);
      scanf("%d",&num[i]);

}
for (i=0;i<=4;i++)
    {

sum=sum+num[i];
avg=sum*0.2;


    }

      printf("  Sum of the given values of array is :-  %d \n",sum);
       printf("  Average of the given values of array is :-  %d",avg);
    return 0;
}
