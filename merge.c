#include<stdio.h>
void main()
{
	int A[50], B[50], C[50];
	int n1,n2,k=0,i,j,p;
	printf("How many elements do you want to store in Array 1: ");
	scanf("%d",&n1);
	printf("How many elements do you want to store in Array 2: ");
	scanf("%d",&n2);
	printf("\n Enter the %d elements of the first array: ", n1);
	for(i=0;i<n1;i++)
	{
	  scanf("%d", &A[i]);
	}
	printf("\n Enter the %d elements of the second array: ", n2);
	for(j =0;j<n2;j++)
	{
	  scanf("%d", &B[j]);
	}
	printf("The first array is: \n");
	for(i=0; i<n1; i++)
	{
	  printf("%d \n", A[i]);
	}
	printf("The second array is: \n");
	for(j=0; j<n2; j++)
	{
	  printf("%d \n", B[j]);
	}

	i=0;
	j=0;
	k=0;
	while(i<n1 && j<n2)
	{
		if(A[i]<B[j])
		  {
		     C[k]=A[i];
		     k++;
		     i++;
		  }
		else if(A[i]>B[j])
		  {
		     C[k]=B[j];
		     k++;
		     j++;
		  }
		else
		  {
		   C[k]=A[i];
		   k++;
		   i++;
		   j++;
		  }
	}
	while(i<n1)
{
	C[k]=A[i];
	k++;
	i++;}
	while(j<n2){
	C[k]=B[j];
	k++;
	j++;
}
	p=k;
	printf("The merged array is: \n");
	for(k=0; k<p; k++)
	{
	  printf("%d \n", C[k]);
	}
}
