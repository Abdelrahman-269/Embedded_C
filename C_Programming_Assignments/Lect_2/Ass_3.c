#include<stdio.h>
void main()
{
	int num1, num2, num3;
	printf("Enter num1 is :");
	scanf("%d",&num1);
	printf("Enter num2 is :");
	scanf("%d",&num2);
	printf("Enter num3 is :");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3)
		printf("The maximum number is %d:",num1);
	else if(num2>num1 && num2>num3)
	    printf("The maximum number is %d:",num2);
	else
	    printf("The maximum number is %d:",num3);
}