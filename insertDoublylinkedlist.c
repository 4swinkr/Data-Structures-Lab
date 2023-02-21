#include<stdio.h>
#include<stdlib.h>
struct node
	{
		int data;
		struct node *next;
		struct node *prev;
	};
struct node *head=NULL;
struct node *ptr=NULL;
struct node *new=NULL;
struct node *temp=NULL;
struct node *item=NULL;
void main()
{
	int n,i,ch;
	printf("Enter the number of nodes to be created: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		new=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data to be inserted: ");
		scanf("%d",&new->data);
  		new->prev=NULL;
		new->next=NULL;
		if(head==NULL)
			head=new;
		else
		{
			ptr=head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=new;
			new->prev=ptr;
		}
	}
	printf("Doubly linked list is created\n");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\t", ptr->data);
		ptr=ptr->next;
	}
	printf("Where do you want to insert the new node: \n1.Beginning\n 2.End\n 3.At a specified location\n 4.Exit");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:	printf("\n Insertion at the beginning...");
			new=(struct node*)malloc(sizeof(struct node));
			printf("\nEnter the new data to be inserted: ");
			scanf("%d",&new->data);
  			new->prev=NULL;
			new->next=head;
			head=new;
			printf("\nThe new Doubly linked list is: ");
			ptr=head;
			while(ptr!=NULL)
			{                                                                   
				printf("%d\t", ptr->data);
				ptr=ptr->next;
			}
			break;

		case 2: new=(struct node*)malloc(sizeof(struct node));
			printf("\n Insertion at the end...");
			printf("Enter the data to be inserted: ");
			scanf("%d",&new->data);
			ptr=head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=new;
			new->prev=ptr;
			printf("\nThe new Doubly linked list is: ");
			ptr=head;
			while(ptr!=NULL)
			{                                                                   
				printf("%d\t", ptr->data);
				ptr=ptr->next;
			}
			break;

		case 3: printf("\n Insertion at a specified location...");
			struct node *ptr = (struct node *)malloc(sizeof(struct node));  
			struct node *temp;   
			int i, loc;   
			if(ptr == NULL)  
			{  
				printf("\n OVERFLOW");  
			}  
			else  
			{  
				printf("\nEnter the location\n");  
				scanf("%d",&loc);  
				temp=head;  
				for(i=0;i<loc;i++)  
				{  
					temp = temp->next;  
					if(temp == NULL)  
					{  
						printf("\ncan't insert\n");  
						return;  
					}  
				}  
				ptr->data = item;  
				ptr->next = temp->next;  
				ptr -> prev = temp;  
				temp->next = ptr;  
				temp->next->prev=ptr;  
				printf("Node Inserted\n");  
			}
			break;			

		case 4: printf("\n Exiting...");
			exit(0);

		default: printf("Invalid");
			
	}

}

