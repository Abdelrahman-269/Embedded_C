#include<stdio.h>

void main()
{
	int arr[10]={0};
	int temp;

	for(int i=0;i<10;i++)
	{
		printf("please enter number %d :  ",(i+1));
		scanf("%d",&arr[i]);	
	}


	for(int j=0;j<9;j++)
	{
		for(int i=0;i<9-j;i++)
		{	
			if(arr[i]>arr[i+1])
			{
				
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;		
			}
		}
		
	}
	
	printf(" the maximum number is : %d  \n",arr[9]);
	printf(" the minimum number is : %d \n ",arr[0]);	

}