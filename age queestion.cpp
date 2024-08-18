#include<stdio.h>
#include<conio.h>
int main()
{
 int age;
 char gender;
 printf("Enter gender=");
 scanf("%c",&gender);
 switch(gender)
 {
 	// female=f
 	case 'f':
 	printf("Women worked in Urben area");
 	break;
 	//Male=m
 	case 'm':
  
 	{
	 

 	
 		printf("Enter your age=");
 		scanf("%d",&age);
 		if(age>20&&age<40)
 		printf("This age mens worked anywhere");
 		else
 		if(age>40&&age<60)
 		printf("This age mens worked only Urben area");
 		else
 		printf("Error due to age");
 		break;
}
 default :
 	printf("Error you entered wroung gender");
	 	
 	
 }
 return 0;
}
