#include<stdio.h>
main()
{       int a[20],i,j,n,temp;
        printf("\nenter array size:");
        scanf("%d",&n);
        printf("\nEnter the array:");
        for(i=0;i<n;i++)
        {       scanf("%d",&a[i]);
        }
        for(i=0;i<(n-1);i++)
        {       for(j=i+1;j<n;j++)
                {       if(a[i]>a[j])
                        {       temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }
                }
        }
        printf("\nSorted Array:\n");
        for(i=0;i<n;i++)
        {       printf("%d\n",a[i]);
        }
}

