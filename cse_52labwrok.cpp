//PROGRAM TO TAKE 10 INPUT FOr USER AND DISPLAY THEM USING ARRAY FUNCTION
#include<stdio.h>
int main()
{
	float num[10];

	int i;
	for (i=0;i<10;i++)
	{printf("Enter number %d  of the array:-  ",i);
	scanf("%f",&num[i]);
	}
	{
		int i;
		for (i=0;i<10;i++)
		printf("\nElement %d of the array is :-  %f \n",i,num[i]);
	}
	return 0;
}




