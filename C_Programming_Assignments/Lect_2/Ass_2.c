#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main()
{
	char x[15], y[15];
	char a[]="Abdelrahman123";
	char b[]="ITI_INTAKE_43";
	char c;
	char pass;
	
	printf("Enter your ID");
	scanf(" %[^\n]*c",&x);
	char ID = strcmp(a,x);
	
	if(ID == 0)
	{
		printf("Enter your password ");
		scanf(" %[^\n]*c",&y);
		pass = strcmp(b,y);
		
		if(pass == 0)
		{
			printf("Welcome");

		}
		
		else
		{	
			printf("Invalid password");	
		}
		
	}
	
	else
		printf("Invalid ID");
}	
	
	
	