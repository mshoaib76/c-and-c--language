#include<stdio.h>
int main()
{
	int n;
	printf("ARe you ready for gusess gaming\n1.Yes\n2.No");
	scanf("%d",&n);
	if(n==1)
	{ 
	  printf("Lets Play the gusess gaming\nQuestion\n1.What is that works from morning till evening but never sleeps\nSelect one:\n1-Brain\n2-man\n3-Factory");
	   scanf("%d",&n);
	  if(n==1)
     	{
			printf("\nCongragulations");
		
     	}
	    else
     	{
		printf("okay\nthanks");
	    }
	    else
	   {
		printf("Your answer is wrong");
	   }
		printf("\nAre you Ready for question 2\n1-Yes\n2-No");
		scanf("%d",&n);
		if(n==1)
		{
		
		printf("\nquestion 2\nWhat is it that is at home,outside,in the garden,and even on the tarrace,that you want and i want too\n1-freedom\n2-air\n3-money");
		scanf("%d",&n);
		if(n==1)
		{
			printf("\nCongragulations");	
		}
		else
		{
				printf("okay\nthanks");
		}
		else
		{
		printf("Your answer is wrong");
		}
      	
      	
}
}
