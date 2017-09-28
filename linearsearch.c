#include<stdio.h>
main(){
	int a[50],x,n,f,p,i;
	f=0;
	printf("\nEnter No. of array elements:");
	scanf("%d",&n);
	printf("\nEnter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element to be searched:");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(a[i]==x){
			f=1;
			p=i+1;
			break;
		}
	}
	if (f==1)
		printf("\nElement found at %d\n ",p);
	else
		printf("\nNot Found!");
} 
		
