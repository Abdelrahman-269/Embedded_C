#include<string.h>
#include<stdio.h>
#include<stdlib.h>

typedef	struct creation
	{
		unsigned char full_name[60];
		unsigned char full_address[60];
		int age;
		int national_ID;
		long Balance;
		
		unsigned char Gurdian[60];
		int Gurdian_ID;
		
		
		unsigned char status[10];
		long Account_ID;
		int password;
		
	}client ;
	
client clients[20];
	
	
void create_account(int place_of_client);
void open_existing_account(int required_bank_ID);
void make_transaction(int receiving_bank_account_ID, int delvaring_money);
void get_cash(int cash_money);
void depost_money(int income);
void change_passowrd();



unsigned char Admin_username[15]="Abdelrahman";
unsigned char Admin_password[10]="0123456789";

int place_of_client = 1;
int required_bank_ID;
int cash_money;

long client_ID;
int  client_password;
int income;
int receiving_bank_account_ID;
int delvaring_money;


void admin_window()
{
	
	
unsigned char username[15];
unsigned char password[10];

printf("Enter admin username\n");
scanf(" %[^\n]*c",&username);

unsigned char compare_username = strcmp(Admin_username,username);

if (compare_username == 0)
{
	
	printf("Enter admin password\n");
	scanf(" %[^\n]%*c",&password);

	unsigned char compare_password = strcmp(Admin_password,password);

	if (compare_password == 0)
		{

	
		int status;
		printf("To create Bank Account press 1\n");
		printf("To open existing Account press 2\n");
		printf("To exit system press 3\n");
	
		scanf("%d",&status);
		
		switch (status)
		{
			case (1):
			{
			printf("You are able to create new account\n");
				
			create_account( place_of_client);
			place_of_client +=1;
				
			}
			break;
			
			case (2):
			{
			printf("opening existing account\n");
			open_existing_account( required_bank_ID);
			}
			break;
			
			case (3):
			printf("Good bye\n");
			break;
			
			default :
			printf("Invalid number\n");
		}
		
		}

	else
	{
		printf("incorrect password");
	}
}
	else
	{
		printf("incorrect username");
	}
}





void create_account(int place_of_client)
{
	int unique;
	int *automatic_password_ptr=&unique;
	
	clients[place_of_client].full_name;
	clients[place_of_client].full_address;
	clients[place_of_client].national_ID;
	clients[place_of_client].age;
	clients[place_of_client].Balance;
	clients[place_of_client].Gurdian;
	clients[place_of_client].Gurdian_ID;
	clients[place_of_client].password;
	clients[place_of_client].status;
	clients[place_of_client].Account_ID;
	
	printf("Enter your full name\n");
	scanf(" %[^\n]",&clients[place_of_client].full_name);
	unsigned char client_name[60] ;
	strcpy (client_name,clients[place_of_client].full_name);
	
	
	printf("Enter your full address\n");
	scanf(" %[^\n]",&clients[place_of_client].full_address);
	unsigned char client_address[60] ;
	strcpy (client_address,clients[place_of_client].full_address);

	fflush(stdin);
	printf("Enter your national IN\n");
	scanf("%d",&clients[place_of_client].national_ID);
	int n = clients[place_of_client].national_ID;
	
	printf("Enter your age\n");
	scanf("%d",&clients[place_of_client].age);
	int client_age = clients[place_of_client].age ;
	if (clients[place_of_client].age < 21)
	{
		printf("Enter your gurdian name\n");
		scanf(" %[^\n]",&clients[place_of_client].Gurdian);
		unsigned char client_gurdian[60] ;
		strcpy (client_gurdian,clients[place_of_client].Gurdian);
		
		printf("Enter your gurdian ID\n");
		scanf("%d",&clients[place_of_client].Gurdian_ID);
		int client_Gurdian_ID = clients[place_of_client].Gurdian_ID ;
		
	}
	
	printf("Enter Balance\n");
	scanf("%d",&clients[place_of_client].Balance);
	long client_Balance = clients[place_of_client].Balance ;
	
	
	clients[place_of_client].password = rand()%(999999999 - 100000000 +1)+100000000;
	//rand()%(1000000 - 1000 +1)+1000;
	
	clients[place_of_client].Account_ID = rand()%(99999999999999 - 10000000000000 +1)+10000000000000;
	
	//unsigned char client_status[10] = "Active";
	strcpy (clients[place_of_client].status,"Active");
	
	
	printf("Client number %d details\n",place_of_client);
	printf("Your name is %s\n",clients[place_of_client].full_name);
	printf("Your address is %s\n",clients[place_of_client].full_address);
	printf("Your age is %d\n",clients[place_of_client].age);
	printf("Your national ID is %d\n",clients[place_of_client].national_ID);
	if (clients[place_of_client].age < 21)
	{
		printf("Your gurdian name %s\n",clients[place_of_client].Gurdian);
		printf("Enter your gurdian ID\n",clients[place_of_client].Gurdian_ID);
	}
	
	printf("Your Balance is %d\n",clients[place_of_client].Balance);
	printf("Your password is %d\n",clients[place_of_client].password);
	printf("Your Status is %s\n",clients[place_of_client].status);
	printf("Your Account_ID is %d\n",clients[place_of_client].Account_ID);
	
	printf("\n");
	printf("\n");
	printf("\n");
}



// for (int i= 0 ;i<20; i++)
// if (clients[i].bankaccountId == variable)
// 


void open_existing_account(int required_bank_ID)
{
	
	printf("Enter your ID\n");
	scanf("%d",&required_bank_ID);
	for (int i= 0 ;i<20; i++)
	{
		if (clients[i].Account_ID == required_bank_ID)
		{
			int existing_account_options;
			printf("To make transaction press 1\n");
			printf("To get cash press 2\n");
			printf("To change account statue press 3\n");
			printf("To depost in account press 4\n");
			printf("To return to main menu press 5\n");
			
			scanf("%d",&existing_account_options);
			
			switch(existing_account_options)
			{
				case (1):		
				printf("1");
				make_transaction(receiving_bank_account_ID,delvaring_money);
				break;
				
				case (2):
				{
				printf("opening existing account\n");
				get_cash(cash_money);
				}
				break;
				
				case (3):
				printf("3");
				break;
				
				case (4):
				{
				printf("depost_function\n");
				depost_money(income);
				}
				break;
				
				case (5):
				printf("Back to main\n");
				break;
			}
			
		}

	}

}


void client_window()
{

	
	printf("Enter your ID\n");
	scanf("%d",&client_ID);
	for (int i= 0 ;i<20; i++)
	{
		if (clients[i].Account_ID == client_ID)
		{
			printf("Enter your password\n");
			scanf("%d",&client_password);
			for (int j= 0 ;j<20; j++)
			{
				if (clients[j].password == client_password)
				{
	
					int client_account_options;
					printf("To make transaction press 1\n");
					printf("To get cash press 2\n");
					printf("To change account password press 3\n");
					printf("To depost in account press 4\n");
					printf("To return to main menu press 5\n");
					
					scanf("%d",&client_account_options);
					
					switch(client_account_options)
					{
						case (1):
						{
						printf("1");
						make_transaction(receiving_bank_account_ID,delvaring_money);
						}
						break;
						
						case (2):
						{
						printf("opening existing account\n");
						get_cash(cash_money);
						}
						break;
						
						case (3):
						{
						printf("3");
						change_passowrd(client_password);
						}
						break;
						
						case (4):
						{
						printf("depost_function\n");
						depost_money(income);
						}
						break;
						
						case (5):
						printf("Back to main\n");
						break;
					}
				}
			}
		}
		
		
		// else
		// {
			// printf("Invalid Bank Account ID\n");
		// }
	}
	
	
}




// 1 make transaction
void make_transaction(int receiving_bank_account_ID, int delvaring_money)
{
	for (int i= 0 ;i<20; i++)
	{
		if (clients[i].Account_ID == client_ID)
		{
			printf("Enter the account ID of the receiving person");
			scanf("%d",&receiving_bank_account_ID);
			for (int j= 0 ;j<20; j++)
			{
				if (clients[j].Account_ID == required_bank_ID)
				{
					printf("Enter the value of money to transcate\n");
					scanf("%d",&delvaring_money);
					if(clients[i].Balance >= delvaring_money)
					{
						clients[i].Balance -= delvaring_money;
						clients[j].Balance += delvaring_money;
						printf("Your balance is %d\n",clients[i].Balance);
											
					}
				}
			}	
		}
	
	}
}

// 2 get cash
void get_cash(int cash_money)
{
	int i=0;
	printf("Enter the value of cash\n");
	scanf("%d",&cash_money);
	
	
	while(i<20) 
	{
		if(clients[i].Balance >= cash_money)
		{
			clients[i].Balance -= cash_money;
			printf("You have %d cash\n",cash_money);
			printf("Your Balance is %d\n",clients[i].Balance);
			break;
		}
		i++;
	}	
}	



//3 change password
void change_passowrd()
{
//	int old_password;
	printf("Enter your password\n");
	scanf("%d",&client_password);
	for (int x= 0 ;x<20; x++)
	{
		if (clients[x].password == client_password)
		{
		
			printf("Enter the new password\n");
			scanf("%d",&client_password);
			
			clients[x].password == client_password;
			printf("Your new password is %d\n",client_password);
		}
		
		else
		{
			printf("Invalid password\n");	
		}
	}
}




// 4 depost money
void depost_money(int income)
{
			printf("Enter your password\n");
			scanf("%d",&client_password);
			for (int i= 0 ;i<20; i++)
			{
				if (clients[i].password == client_password)
				{
					printf("Enter the value to depost");
					scanf("%d",&income);
			
					clients[i].Balance += income;
					printf("Your Balance is %d\n",clients[i].Balance);

				}
				
			}
		
}


































