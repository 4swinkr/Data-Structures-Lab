#include<stdio.h>
#include<stdlib.h>
void create_list(int);
void insert_beg();
void insert_end();
void insert_btw(int);
void del_begin();
void del_end();
void del_btw(int);
void display();
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL;
struct node *ptr=NULL;
struct node *temp=NULL;
struct node *new=NULL;
void main()
{
	int ch,n,item;
	while(ch!=8)
	{
		printf("Enter your choice:\n1.Create a list\n2.Insert at beginning\n3.Insert at end\n4.Insert after a given element\n5.Delete 			from beginning\n6.Delete at end\n7.Deletion of a given element\n8.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the number of nodes to be inserted:");
				scanf("%d",&n);
				create_list(n);
				break;	
			case 2:insert_beg();
				break;
			case 3:insert_end();
				break;
			case 4:printf("Enter the data to be inserted:");
				scanf("%d",&item);
				insert_btw(item);
				break;	
			case 5:del_begin();
				break;
			case 6:del_end();
				break;
			case 7:printf("Enter the data to be deleted:");
				scanf("%d",&item);
			case 8:exit(0);
				break;
			default:printf("Invalid choice");
			
		}		
	}
}
void insert_beg()
{
	new=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data to be inserted:");
	scanf("%d",&new->data);
	new->next=NULL;
	new->prev=NULL;
	if(new==NULL)
		printf("Memory not available...Overflow!");
	else
	{
		if(head==NULL)
		head=new;
		else
		{
			new->next=head;
			head->prev=new;
			head=new;
		}
	}
	printf("\nList post insertion:");
	display();
}

void insert_end()
{
	new=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data to be inserted:");
	scanf("%d",&new->data);
	new->next=NULL;
	new->prev=NULL;
	if(new==NULL)
		printf("Memory not available...Overflow!");
	else
	{
		if(head==NULL)
		{
			printf("...Adding to the list...");
			head=new;
		}
		else
		{
			ptr=head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
				ptr->next=new;
				new->prev=ptr;
			}
		}
	}
	printf("...List is...");
	display();
}

void insert_btw(int item)
{
	new=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data to be inserted:");
	scanf("%d",&new->data);	
	new->next=NULL;
	new->prev=NULL;
	if(new==NULL)
		printf("Memory not available...Overflow!");
	else
	{
		if(head==NULL)
		{
			printf("...List is empty...adding to the list...");
			head=new;
		}
		else
		{
			ptr=head;
			while(ptr->data!=item && ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			if(ptr->next==NULL)
			{
				printf("%d Not present in the given list!\nHence adding to the end of the list...",item);
				ptr->next=new;
				new->prev=ptr;
			}
			else
			{
				temp=ptr->next;
				new->next=temp;
				temp->prev=new;
				prev->next=new;
				new->prev=ptr;
			}	
		}
	}
	printf("\nList is:\t");
	display();
}

void del_begin()
{
	if(head==NULL)
	{
		printf("List empty");
			return;
	}
	else
	{
		head=head->next;
		printf("\nList after deletion:");
		display();
	}
}

void del_end()
{
	if(head==NULL)
	{
		printf("List empty");
			return;
	}
	else
	{
		ptr=head;
		if(ptr->next==NULL)
		{
			head=NULL;
			free(ptr);		
		}
		else
		{
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
				temp=ptr->prev;
				ptr->prev=NULL;
				temp->next=NULL;
			}
		}
		printf("\nList after deletion:");
		display();
	}
}

void del_btw(int item)
{
	struct node *temp1=NULL;
	int flag=0;
	if(head==NULL)
	{
		printf("List empty");
		return;	
	}
	else
	{
		ptr=head;
		if(ptr->data==item)
		{
			head=head->next;
			free(ptr);		
		}	
		else
		{
			while(ptr->next!=NULL && ptr->data!=item)
			ptr=ptr->next;
			if(ptr->next==NULL)
			{
				if(ptr->data==item)
				{
					temp=ptr->prev;
					ptr->prev=NULL;
					temp->next=NULL;
				}
				else
				{
					printf("%d not present in the list",item);				
				}			
			}
			else
			{
				temp=ptr->next;
				temp1=ptr->prev;
				temp->prev=temp1;
				temp1->next=NULL;
				ptr->next=NULL;
				ptr->prev=NULL;
				free(ptr);			
			}		
		}
	}
	if(flag==0)
	{
		printf("\n...List is...\t");
		display();
	}
}
void display()
{
	if(head==NULL)
	printf("\nList is empty\n");
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			printf("%d",ptr->data);
			ptr=ptr->next;
		}	
	}	
}

void create_list(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		new=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data to be inserted:");
		scanf("%d",&new->data);	
		new->next=NULL;
		new->prev=NULL;
		if(new==NULL)
		{
			printf("Memory not available...Overflow!");
			break;
		}
		else
		{
			if(head==NULL)
			{
				printf("...List is empty...adding to the list...");
				head=new;
			}
			else
			{
				new->next=head;
				head->prev=new;
				head=new;
			}
		}
	}
	ptr=head;
	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr=ptr->next;
	}
		
}





