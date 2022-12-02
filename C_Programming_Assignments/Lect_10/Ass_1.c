#include<stdio.h>
#include<stdlib.h>

typedef struct MY_strct node;
struct MY_strct
{
	unsigned char data;
	node*next;
	node*pre;	
};

node *first=NULL;
node *last=NULL;



	node * Creat_Node(unsigned char Data);
	void add_Node(node*);
	void Display_all(void);
	node * search(unsigned long value);
	void Delet(node*del);
	void insertAfter(node*current,node*after);
/********************************************/
void main()
{		
	node*created=NULL;
	node*searched=NULL;
while(1)
{	
	unsigned char d;
	printf("Create: 	 press 1\n");
	printf("Search: 	 press 2\n");
	printf("Insert: 	 press 3\n");
	printf("Delete:      	 press 4\n");
	printf("Display all: 	 press 5\n");
	printf("Exit: 		 press 6\n");
	scanf("%d",&d);
	switch(d)
	{
		case 1:
		{		unsigned char data;
				printf("enter data:");	
				scanf("%d",&data);
				created=Creat_Node(data);
				add_Node(created);
		}
		break;
		case 2:
		{		unsigned char data_s;
				printf("enter seacrh value:");	
				scanf("%d",&data_s);
				searched=search(data_s);
				if(searched!=NULL)printf("the data found and is =%d\n",searched->data);
				
		}
		break;
		case 3:
		{		unsigned char data,data1;
				printf("enter data for the new node ");	
				scanf("%d",&data);
				created=Creat_Node(data);
				printf("enter data of prev  node ");	
				scanf("%d",&data1);
				searched=search(data1);
				insertAfter(created,searched);
		}
		break;
		case 4:
		{		unsigned char data;
				printf("enter data for the reqeusted to delet node ");	
				scanf("%d",&data);
				searched=search(data);
				Delet(searched);
		}		
		break;
		case 5:
			Display_all();
		break;
		case 6:
			printf("thank you");
			return;	
		break;
		default:
		break;		
	}
  }	
}
void insertAfter(node*current,node*after)
{
	current->next=after->next;
	current->pre=after;
	after->next->pre=current;
	after->next=current;
}
void Delet(node*del)
{
	if(del==first)
	{
		if(del==last)
		{
			first=last=NULL;
		}
		else
		{
			first=del->next;
			first->pre=NULL;			
		}
	}
	else if(del==last)
	{
		last=last->pre;	
		last->next=NULL;
	}
	else
	{
		del->next->pre=del->pre;
		del->pre->next=del->next;	
	}
free(del);
}
node* search(unsigned long value)
{
	node *ptr=first;
	while(ptr!=NULL)
	{
		if(ptr->data==value)
		{
			return ptr;
		}
		else{
		ptr=ptr->next;
		}
	}
	printf("not found node\n");
	return NULL;
}
void add_Node(node*ptr1)
{
	if(first==NULL)
	{
		first=ptr1;
		last=ptr1;
	}
	else
	{
		ptr1->pre=last;
		last->next=ptr1;
		last=ptr1;		
	}
}
node* Creat_Node(unsigned char Data)
{
		node *new=(node*)malloc(sizeof(node));	
		new->data=Data;
		new->next=NULL;
		new->pre=NULL;
		return new;
}
void Display_all(void)
{	unsigned char count=0;
	node *ptr=first;
	while(ptr!=NULL)
	{
		count++;
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
	if(count==0)printf("empty list\n");
	