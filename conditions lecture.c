#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter acharacter=");
	scanf("%c",ch);
	if(ch>='A' && ch<='Z')
	printf("capital latter");
	else if(ch>='a'&& ch<='z');
	printf("small latter");
     if(ch>='0' && ch<='9')
	printf("show symbels");
	else
	printf("special symbels");

}
