#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("\nEnter matrix value");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	{
	
	printf("\nEnter value for a[%d][%d]=",i,j);
	scanf("%d",&a[i][j]);
}
}
printf("\nmatrix \n");

	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%d \t",a[i][j]);
}
printf("\n");
       }
}
