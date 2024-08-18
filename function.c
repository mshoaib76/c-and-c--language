#include<stdio.h>
#include<conio.h>
int qube(int no)
{
	int result;
	result=no*no*no;
	return(result);
}
int main()
{
	int qu,no;	
	scanf("%d",&qu);
	qu=qube(no);
	printf("qu of number=",qu);
	getch();
	
}
