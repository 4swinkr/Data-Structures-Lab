#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[100],i,n,sum=0,p,m;
	char ch;
	printf("\n Enter the number of elements that you want to store\n");
	scanf("%d",&n);
	printf("Enter the %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\n The values are");
	for(i=0;i<n;i++)
	{
		printf("\n %d \n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum is: %d",sum);

/* In between Insertion */

	printf("Do you want to insert any element: Y or N");
	scanf("%c",&ch);
	if(ch=='Y')
	{
		printf("At what position do you want to insert the element");
		scanf("%d",&p);
		for(i=n-1;i>=p-1;i--)
		{
		 a[i+1]=a[i];
		}
		
		printf("\n Enter the new element");
		scanf("%d",&m);
		a[p-1]=m;
		printf("\n The values are");
		for(i=0;i<=n;i++)
		{
			printf("\n %d \n",a[i]);
		}
	}
	else
		exit(0);
}

