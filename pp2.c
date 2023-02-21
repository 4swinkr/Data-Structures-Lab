#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
struct node *pr=NULL;

void main()
{
	int c;
	do
	{	
		printf("\n\nEnter your choice \n1. Push\n2. Pop\n3. Display \n4.Exit\n\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: push();
				break;

			case 2: pop();
				break;

			case 3: display();
				break;

			case 4: printf("Exited");
				break;

			default: printf("Invalid");
		}
	} while(c!=4);
}

void push()
{
	struct node *new=NULL;
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data...");
	scanf("%d", &new-> data);
	new->next=top;
	top=new;
	//cpy=top;
}

void pop()
{
	struct node *ptr;
	if(top==NULL)
		printf("Stack Underflow\n");
	else
	{
		printf("Popped item is %d ",top->data);
		ptr=top;
		top=top->next;
		free(ptr);
	}
}

void display()
{
	pr=top;
	if(pr==NULL)
		printf("Stack underflow");
	else
	{
		printf("Stack elements are:\n");
		while(pr!=NULL)
		{
			printf("%d \n", pr->data);
			pr=pr->next;
		}
	}
//top=cpy;
}
