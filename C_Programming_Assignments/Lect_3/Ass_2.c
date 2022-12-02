#include<stdio.h>
void main()
{
	int ID, password, k=0;
	printf("Please inter your ID :");
	scanf("%d",&ID);
	if (ID==1234 || ID==5678 || ID==9870)
	{
        printf("Please inter your password :");
        scanf("%d",&password);
        if (ID==1234 && password==7788)
             printf("Welcome Ahmed");	
        else if (ID==5678 && password==5566)
             printf("Welcome Amr");	
		else if (ID==99870 && password==1122)
             printf("Welcome Wael"); 
		else 
		{	
        	while (k<2)
			{
				
				printf("Try again :");
				
				scanf("%d",&password);
				if (ID==1234 && password==7788)
				{
					printf("Welcome Ahmed");
					break;
				}	
				else if (ID==5678 && password==5566)
				{
					printf("Welcome Amr");	
					break;
				}
				else if (ID==99870 && password==1122)
				{
					printf("Welcome Wael"); 
					break;
				}	
				k++;
				//printf("No more tries");			
			}	
			if (k>=2)
				printf("No more tries");	
        }		
    }
    
	else 
		printf("You are not registered");
}	
	