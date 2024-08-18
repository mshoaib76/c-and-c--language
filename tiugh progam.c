#include<stdio.h>
#include<conio.h>
int main()
{
	int p,c;
	printf("Enter the manu\n 1-cake\n 2-pizza\n select any dish from menu= ");
	scanf("%d",&p);
	switch(p)
	{
	
		case 1:
		printf("Select the flavour by the follwing list=\n 1-Cholacate- 300 PKR\n 2-Vanila-250 PKR\n 3-stabarlly-200 PKR\n Select any flavour from the list");
		printf("%d",&c);
		break;
	switch(c)

		case 1:
		printf("you have selected cholacate cake");
		break;
		case 2:
			printf("you have selected Vanila cake");
			break;
			case 3:
				printf("you have selescted stabarlly");
				break;
				default:
					printf("you choice is invalid");
				}
				
					
						case2:
							printf("Selected a flavour from the list:\n 1-chicken 800 PKR\n 2-pizza 1200 PKR\n 3-buttan 700 PKR\n Select any flavour from the list");
							scanf("%d",&c);
							switch(c)
							{
								case 1 :
								printf("you have selected chicken");
								break;
								case 2:
								printf("you have selected pizza");
								break;
								case 3:
									printf("you have selected buttan");
									break;
									default :
									printf("Sorry your choice is not correct");
								
								
							}
							
					
}
