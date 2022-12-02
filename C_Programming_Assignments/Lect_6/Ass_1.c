#include<stdio.h>
void Arr(char *ptr_to_arr);


void main()
{  
 
	char arr[5]={3,1,5,4,0};
	Arr(arr);
	
}
void Arr(char *ptr_to_arr){
	
	char temp;
	
	for(int i=0;i<5-1;i++)
	{
		for(int j=0;j<5-1-i;j++)
		{
			if(ptr_to_arr[j]>ptr_to_arr[j+1])
			{
				
				temp=ptr_to_arr[j];
				ptr_to_arr[j]=ptr_to_arr[j+1];
				ptr_to_arr[j+1]=temp;
				
			}
		}
	}
	
		
	for(int i=0;i<5;i++)
	{
		printf("element %d is %d\n",i,ptr_to_arr[i]);
	}
	
	
}