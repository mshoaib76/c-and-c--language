#include<stdio.h>
#define size 8
int main()
{
	int i;
	int first_subject[size];
	int second_subject[size];
	int third_subject[size];
	int fourth_subject[size];
	int fifth_subject[size];
	int total_marks[size];
	printf("Enter the marks of 1st subject \n");
	for(i=0;i<size;i++)
	{
		printf("\nEnter the marks of %d student =",i+1);
		scanf("%d",&first_subject[i]);
		
	}
	printf("\nEnter the marks of 2nd subject =");
	for(i=0; i<size; i++)
	{
		printf("\nEnter the marks of %d student =",i+1);
		scanf("%d",& second_subject[i]);
		
	}
		printf("\nEnter the marks of 3rd subject =");
	for(i=0; i<size; i++)
	{
		printf("\nEnter the marks of %d student =",i+1);
		scanf("%d",& third_subject[i]);
		}
			printf("\nEnter the marks of 4th subject =");
	for(i=0; i<size; i++)
	{
		printf("\nEnter the marks of %d student =",i+1);
		scanf("%d",& fourth_subject[i]);
	}
		printf("\nEnter the marks of 5th subject ");
	for(i=0; i<size; i++)
	{
		printf("\nEnter the marks of %d student =",i+1);
		scanf("%d",& fifth_subject[i]);
		
	}
		
	
	printf("\nTotal marks of each student =");
	for(i=0;i<size;i++)
	{
		total_marks[i]=first_subject[i]+second_subject[i];
		printf("\nTotal marks of %d student=%d",i+1,total_marks[i]);
	}
}
