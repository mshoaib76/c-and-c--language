#include<stdio.h>
#include<conio.h>
void main()

{
	char optr;
	int a,b;
	printf("Enter operater=");
	scanf("%c",&optr);
	printf("Enter first number=");
	scanf("%d",&a);
	printf("Enter second number=");
	scanf("%d",&b);
	
	switch(optr)
	{
		case '+':
			printf("sum=%d",a+b);
			break;
			case '*':
				printf("product=%d",a*b);
				break;
				case '/':
					printf("division=%d",a/b);
					break;
					case '-':
						printf("subsctriction=%d",a-b);
						break;
						case '%':
							printf("Remander=%d",a%b);
							break;
							default:
								printf("Your choice is in valid");
							
								
								
	}
}
