#include<stdio.h>
int max_f(int  a, int b,int c, int d);
int min_f(int  a, int b,int c, int d);
void main()
{
	int num1,num2,num3,num4,max_value,min_value;
	printf("plesase enter number 1 :");
		scanf("%d",&num1);
		printf("plesase enter number 2 :");
		scanf("%d",&num2);
		printf("plesase enter number 3 :");
		scanf("%d",&num3);
		printf("plesase enter number 4 :");
		scanf("%d",&num4);
		

		max_value=max_f(num1,num2,num3,num4);
		min_value=min_f(num1,num2,num3,num4);
		
		if(max_value ==0||min_value==0)
		
		{	
			printf(" one or more of the arguments are equal");	
		}
		
		printf(" the maxium value is %d \n the minimum value is %d",max_value,min_value);
		
}

int max_f(int  a, int b,int c, int d)
{
	if(a>b && a>c && a>d)
		{
			return a;
		}
		
	else if (b>a&& b>c && b>d)
	{
		return b;	
	}
	
	else if (c>a&& c>b && c>d)
	{
		return c;	
	}
	
	else if (d>a&& d>c && d>b)
	{
		return d;	
	}
	
	else return 0;		
		
}

int min_f(int  a, int b,int c, int d)
{
	if(a<b && a<c && a<d)
		{
			return a;
		}
		
	else if (b<a&& b<c && b<d)
	{
		return b;	
	}
	
	
	else if (c<a&& c<b && c<d)
	{
		return c;	
	}
	else if (d<a&& d<c && d<b)
	{
		return d;	
	}
	
	else return 0;
}
