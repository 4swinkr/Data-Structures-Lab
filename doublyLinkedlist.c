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
void main()
{
	int n,i;
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
		printf("Doubly linked list is created");
		ptr=head;
		while(ptr!=NULL)
		{
			printf("%d", ptr->data);
			ptr=ptr->next;
		}
}
