 #include<stdio.h>
 int main()
 {
 	int a[4][6],i,j;
 	printf("Ente matrix value");
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<4;j++)
 		{
 			printf("\nenter values of [%d][%d]",i,j);
 			scanf("%d",&a[i][j]);
		 } 
		
	 }
	  printf("\nmatrix \n");
	  for(i=0;i<3;i++)
 	{
 		for(j=0;j<4;j++)
 		{
		 printf("%d \t",a[i][j]);
 			
		 }
		 printf("\n");
	}		
 }
