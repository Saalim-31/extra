#include<stdio.h>
int main()
{int num[5];
	int i;
    int large;
	for (i=0;i<=4;i++)
	{
	printf("Enter number %d of the array:-  ",i);
	scanf("%d",&num[i]);
}
		for (i=0;i<=4;i++)
        large=num[0];
        {

			if(large<num[i])
			large=num[i];}

		}
    printf("Largest among the given numbers is :-	 %d",large);
}




