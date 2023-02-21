#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
struct node
{
	struct node* left;
	struct node* right;
	int data;
};
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
struct node *new,*root=NULL,*ptr,*ptr1;	
void main()
{
	int ch;
	do
	{
		printf("Enter your option\n 1.Insertion\n 2.Inorder\n 3.PreOrder\n 4.Postorder\n 5.exit\n ");
		scanf("%d",&ch);
		printf("choice is %d\n",ch);
		switch(ch)
		{
			case 1:insertion();
				break;
			case 2:inorder(root);
				break;
			case 3:preorder( root);
				break;
			case 4:postorder(root);
				break;
			case 5:exit(0);
				break;
		default:printf("invalid entry \n");
		}
	}
	while(ch!=5);
	
}

void insertion()
{
	int x;
	new=(struct node *)malloc(sizeof(struct node));
	printf("enter the data to be inserted ");
	scanf("%d",&x);
	if(new==NULL)
	{
		printf("Insufficient memory \n");
	}
	else{
	new->data=x;
	new->left=NULL;
	new->right=NULL;
	if(root==NULL)
	{
		root=new;
	}
	else
	{
		ptr=root;
		while(ptr!=NULL)
		{
			if(x==ptr->data)
			{
				printf("Item present in the tree");
				break;
			}
			else if(x>ptr->data)
			{
				ptr1=ptr;
				ptr=ptr->right;
			}
			else
			{
				ptr1=ptr;
				ptr=ptr->left;
			}
		
		}
		if(ptr==NULL)
		{
			if(x>ptr1->data)
			{
				ptr1->right=new;
			}
			else
			{
				ptr1->left=new;
			}
		}
	}
	}
}
void  deletion()
{ 
	if (root == NULL)
        return root;
	if (key < root->key)
        root->left = deleteNode(root->left, key);
void inorder(struct node*ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		printf("%d",ptr->data);
		inorder(ptr->right);
	}
}
void preorder(struct node*ptr)
{
	if(ptr!=NULL)
	{
		printf("%d",ptr->data);
		inorder(ptr->left);
		inorder(ptr->right);
	}
}
void postorder(struct node*ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		inorder(ptr->right);
		printf("%d",ptr->data);
	}
}
		
	




