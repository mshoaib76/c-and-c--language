#include<stdio.h>
#include<conio.h>
int main()
{
	int age ;
	char gender;
	printf("Enter gender=");
	scanf("%c",gender);
	switch(gender)
{
	//f stands for female
	case 'f':
		printf("she works only in urben area");
		break;
		//m stands for m 
		case 'm':
		break;
		
	{

	printf("Enter your age");
	scanf("%d",age);	
	if(age>20&&age<<40)
	printf("THis mans worked in urben area");
else 
if(age>40&&age<60)
printf("This mans worked onlu urben area");
else
printf("Error due to age");
break;
}
default:
	printf("your choice is incorrect");
}
}

