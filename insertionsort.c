#include<stdio.h>
main()
{       int a[20],i,j,n,temp;
        printf("\nenter array size:");
        scanf("%d",&n);
        printf("\nEnter the array:");
        for(i=0;i<n;i++)
        {       scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++)
        {       temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{	a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
        }
        printf("\nSorted Array:\n");
        for(i=0;i<n;i++)
        {       printf("%d\n",a[i]);
        }
}




