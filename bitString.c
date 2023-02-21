#include<stdio.h>
#include<string.h>
void uni(char*,char*,char*);
void intr(char*,char*,char*);
void diff(char*,char*,char*);

void main()
{
	char s1[2], s2[20], s3[20];
	printf("Enter the first string: ");
	scanf("%s",s1);
	printf("Enter the second string: ");
	scanf("%s",s2);

	intr(s1, s2, s3);
	printf("Intersection is: %s",s3);
	
	uni(s1, s2, s3);
	printf("Union is: %s",s3);

	diff(s1, s2, s3);
	printf("Difference is: %s",s3);
}

void uni(char*s1, char*s2, char*s3)
{
	int i,l;
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
		if(s1[i]=='0' && s2[i]=='0')
			s3[i]='0';
		else
			s3[i]='1';
	}
	s3[i]='\0';
}

void intr(char*s1, char*s2, char*s3)
{
	int i,l;
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
		if(s1[i]=='1' && s2[i]=='1')
			s3[i]='1';
		else
			s3[i]='0';
	}
	s3[i]='\0';
}

void diff(char*s1, char*s2, char*s3)
{
	int i,l;
	l=strlen(s1);
	for(i=0;i<l;i++)
	{
		if(s1[i]=='1' && s2[i]=='0')
			s3[i]='1';
		else
			s3[i]='0';
	}
	s3[i]='\0';
}
