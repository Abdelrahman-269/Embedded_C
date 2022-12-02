#include<stdio.h>
void main()
{
	int class_1[10]={56,98,32,25,47,75,63,27,75,76};
	int class_2[10]={89,65,74,32,58,76,80,48,75,46};
	int class_3[10]={81,67,76,95,48,67,43,56,61,83};
	int temp;
	int passed=0;
	int failed=0;
	int highest,lowest,avg_1,avg_2,avg_3,sum_1,sum_2,sum_3;
	
	
	/*------sorting for class 1 ------*/
	for (int i=0;i<9;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(class_1[j]>class_1[j+1])
			{		
				temp=class_1[j];
				class_1[j]=class_1[j+1];
				class_1[j+1]=temp;
			}	
		}
	}
	
	/*------calculating passed and failed students in class 1 ------*/
	for(int z=0;z<10;z++)
	{
		if(class_1[z]>=50)
		{
			passed++;		
		}
		
		else 
		{
			failed++;
		}
	}
	
	
	/*------sorting for class 2 ------*/
	
	for (int i=0;i<9;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(class_2[j]>class_2[j+1])
			{
				temp=class_2[j];
				class_2[j]=class_2[j+1];
				class_2[j+1]=temp;
			}	
		}
	}

	/*------calculating passed and failed students in class 2------*/
	for(int z=0;z<10;z++)
	{
		if(class_2[z]>=50)
		{
			passed++;		
		}
		
		else 
		{
			failed++;
		}
	}
	
	
	
	
	/*------sorting for class 3 ------*/
	for (int i=0;i<10;i++)
	{
		for(int j=0;j<10-i;j++)
		{
			if(class_3[j]>class_3[j+1])
			{
				//swap
				temp=class_3[j];
				class_3[j]=class_3[j+1];
				class_3[j+1]=temp;
			}	
		}
	}
	
	/*------calculating passed and failed students in class 3------*/
	for(int z=0;z<10;z++)
	{
		if(class_3[z]>=50)
		{
			passed++;		
		}
		
		else 
		{
			failed++;
		}
	}
	
	
	/*------  finding the lowest result  ------*/
	
	
	if(class_1[0]<class_2[0] && class_1[0]<class_3[0])
	{
		lowest=class_1[0];
	}
	
	else if (class_2[0]<class_1[0] && class_2[0]<class_3[0])
	{
		lowest=class_2[0];
	}

	else 
			lowest=class_3[0];
				
				
	/*------  finding the highest result  ------*/
	
	
	if(class_1[9]>class_2[9] && class_1[9]>class_3[9])
	{
		highest=class_1[9];
	}
	
	else if (class_2[9]>class_1[9] && class_2[9]>class_3[9])
	{
		highest=class_2[9];
	}
	
	else 
		highest=class_3[9];			
	
	
	/*------  average and sum  ------*/
	for(int i=0;i<10;i++)
	{
		sum_1=sum_1+class_1[i];	
		sum_2=sum_2+class_2[i];
		sum_3=sum_3+class_3[i];
	}
	avg_1=sum_1/10;
	avg_2=sum_2/10;
	avg_3=sum_3/10;
	printf("number of passed students = %d\n",passed);
	printf("number of failed students = %d\n",failed);
	printf("Highest grade = %d\n",highest);
	printf("lowest grade = %d\n",lowest);
	printf("Average grade of class 1 = %d\n",avg_1);
	printf("Average grade of class 2 = %d\n",avg_2);
	printf("Average grade of class 3 = %d\n",avg_3);
	
}


	
	
	