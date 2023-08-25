#include<stdio.h>
int main()
{
	double a,b,sol;
	int o;
	printf("Enter the first number \t");
	scanf("%lf",&a);
	printf("Enter the second number \t");
	scanf("%lf",&b);
	printf("select operator:- (  1 for addition 2 for sbtration 3 for multiplication 4 for division");
	scanf("%d",&o);
	switch(o){
		case 1 :
		sol = a+b;
		printf("Solution = %lf",sol);
		break;
		case 3:
		sol = a*b;
		printf("Solution = %lf",sol);
		break;
		case 2:
		sol = a-b;
		printf("Solution = %lf",sol);
		break;
		case 4 :
		sol = a/b;
		printf("Solution = %lf",sol);
		break;
		default :
				printf("Not a valid operator")	;		
}
	return 0;

}
