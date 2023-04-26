#include<stdio.h>
#include<string.h>

main()
{
	char a[100],b[100];
	int i,n;
	
	printf("Enter size of string=");
	scanf("%s",&n);
	
	strcyp(b[i],a[i]);
	strrev(a[i]);
	for(i=0;i<=n;i++)
	{
		if(strcmp(a[i],b[i])==0)
		{
			printf("String is palindrom.");
		}
		else
		{
			printf("String is not palindrom.");
		}
	}
}
