#include<stdio.h>

void admin_window();
void create_account();
void client_window();

void main ()
{
	
	while(1)
	{
		int window;
		printf("----------------------Fakhreldin Bank--------------------\n");
		printf("--------------To show client window press 1 -------------\n");
		printf("--------------To show admin window press 2 --------------\n");
		printf("-------------To exit press any other number -------------\n");
		
		scanf("%d",&window);

		if (window ==1)
		{
			printf("Welcome in client window\n");
			client_window();
		}
	
		else if (window ==2)
		{
			printf("Welcome in admin window\n");
			admin_window();
		}
	
		
		else
		{
			printf("Goodbye\n");
			break;
		}
	}
}





