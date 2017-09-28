#include<stdio.h>
main()
{	int n,i,c;
	printf("\nEnter number of elements:");
	scanf("%d",&n);
	int a=0,b=1;
 	printf("%d %d",a,b);
	for(i=2;i<n;i++)
	{	
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
	
	}
}
		
