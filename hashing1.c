#include<stdio.h>
main()
{
	int a[13],i,k,c,ch,f=0;
	for(i=0;i<13;i++)
	a[i]=-1;
	while(1)
		{
			printf("1.insert\n2.search\n3.exit\n");
			scanf("%d",&ch);
			if(ch==1)
			{	if(f==13)
				{ printf("full");
				  break;
				}
				printf("enter the key value : ");
			        scanf("%d",&k);
				for(i=k%13;a[i]==-1;i++)
                                        {
                                          if(a[i]!=-1)
					  {	a[i+1]=k;
					   	break;
					  }
					 a[i]=k;
					 break;
                                        }
				
                                printf("\ninserted\n");
                                f++;
			}
			else if(ch==2)
			{
                                	printf("\nenter the key value  ");
                                	scanf("%d",&k);
                                	for(i=(k%13);i++;c++)
                                	{       c=0;
                                	        if(a[i]==k)
                                        	{       printf("\nelement found at ",i);
                                                	break;
                                        	}
                                        	if(i>12)
                                        	        i=0;
                                        	if(c==13)
                                        	        break;
					}
			}
			else break;
		}
		printf("\nhash element are  \n ");
		for(i=0;i<13;i++)
		printf("%d\n",a[i]);
}

