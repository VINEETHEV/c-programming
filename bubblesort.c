#include<stdio.h>
main()
{	int a[20],i,j,n,temp;
	printf("\nenter array size:");
	scanf("%d",&n);
	printf("\nEnter the array:");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++)
	{	for(j=0;j<(n-i-1);j++)
		{	if(a[j]>a[j+1])
			{	temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted Array:\n");
	for(i=0;i<n;i++)
	{	printf("%d\n",a[i]);
	}
}
