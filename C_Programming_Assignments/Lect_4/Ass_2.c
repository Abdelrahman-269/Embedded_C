#include<stdio.h>
void add(int n_1,int n_2);
void sub(int n_1,int n_2);
void mul(int n_1,int n_2);
void div(int n_1,int n_2);
void and(int n_1,int n_2);
void or(int n_1,int n_2);
void xor(int n_1,int n_2);
void reminder(int n_1,int n_2);
void increment(int n_1);
void deccrement(int n_1);
void not(int n_1);


void main()
{
	int operation_ID;
	int n_1, n_2;
	printf("Enter the operation ID");
	scanf("%d",operation_ID);
	
	switch (operation_ID)
	{
		
		case '1': add(n_1, n_2);
		break;	
		
		case '2': sub(n_1, n_2);
		break;	
		
		case '3': mul(n_1, n_2);
		break;	
		
		case '4': div(n_1, n_2);
		break;	
		
		case '5': and(n_1, n_2);
		break;
		
		case '6': or(n_1, n_2);
		break;	
		
		case '7': xor(n_1, n_2);
		break;	
		
		case '9': reminder(n_1, n_2);
		break;	
		
		case '10': increment(n_1);
		break;

		case '11': deccrement(n_1);
		break;
		
		case '12': not(n_1);
		break;
		
		default :printf("Invalid ID");
		break;
	
	}
	
}	
void add(int n_1,int n_2)
{
	scanf("%d",&n_1);
	scanf("%d",&n_2);
	printf("%d",(n_1+n_2));
}
void sub(int n_1,int n_2)
{
	scanf("%d",&n_1);
	scanf("%d",&n_2);
	printf("%d",(n_1-n_2));
}
void mul(int n_1,int n_2)
{
	scanf("%d",&n_1);
	scanf("%d",&n_2);
	printf("%d",(n_1*n_2));
}
void div(int n_1,int n_2)
{
	scanf("%d",&n_1);
	scanf("%d",&n_2);
	printf("%d",(n_1/n_2));
}
void and(int n_1,int n_2)
{
	scanf("%d",&n_1);
	scanf("%d",&n_2);
	printf("%d",(n_1&n_2));
}
void or(int n_1,int n_2)
{
	scanf("%d",&n_1);
	scanf("%d",&n_2);
	printf("%d",(n_1|n_2));
}
void xor(int n_1,int n_2)
{
	scanf("%d",&n_1);
	scanf("%d",&n_2);
	printf("%d",(n_1^n_2));
}
void reminder(int n_1,int n_2)
{
	scanf("%d",&n_1);
	scanf("%d",&n_2);
	printf("%d",(n_1%n_2));	
}	
void increment(int n_1)
{
	scanf("%d",&n_1);
	printf("%d",(n_1++));
}		
void deccrement(int n_1)
{
	scanf("%d",&n_1);
	printf("%d",(n_1--));
}		
void not(int n_1)
{
	scanf("%d",&n_1);
	printf("%d",(~n_1));
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	