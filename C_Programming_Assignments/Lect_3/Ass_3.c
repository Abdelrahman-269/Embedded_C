#include<stdio.h>
void main()
{
	int hieght, i,j;
    printf("Enter the hieght of the pyramid : ");
	scanf("%d",&hieght);
	for (i=1 ; i<=hieght ; i++)
	{	
	   for(j=i ;j<hieght ;j++)
	   {
		   printf(" ");
	   }
	   
		for(j=1 ;j<=(2*i-1) ;j++)
	   {
		   printf("*");
	   }
	   
	   printf("\n");
	}	
}
