#include<stdio.h>
main()
{
	int a[100][100],i,j,n1,n2;
	
	printf("Enter size of row=");
	scanf("%d",&n1);
	printf("Enter size of colamn =");
	scanf("%d",&n2);
	
	printf("Enter element for metrix= ");
	for(i=0;i<=n1;i++)
	{
		for(j=0;j<=n2;j++)
		{
			printf("a[i]=",i);
			scanf("%d",a[i]);
		}
	}
	for(i=0;i<=n1;i++)
	{
		for(j=0;j=n2;j++)
		{
			printf("%d",a[i]);
		}
	}
	
	
	
}
