#include<stdio.h>
#define size 5
int main()
{
	int i;
	int max;
	int stud_marks[size];
	for(i=0;i<size;i++)
	{
		printf("Enter the marks of %d student =",i+1);
		scanf("%d",&stud_marks[i]);
	}
	  for(i=0; i<size;i++)
	  {
	  	if(stud_marks[i]>max)
	  	max=stud_marks[i];
	  }
	printf("Maximium marks %d =",max);
}

