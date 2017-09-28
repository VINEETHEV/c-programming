#include<stdio.h>
main(){
	int a[20],x,n,beg,mid,end,f,pos,i;
	f=0;
	printf("\nNo. of elements:");
	scanf("%d",&n);
	beg=0;
	end=n-1;
	printf("\nEnter array elements in sorted form:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nElement to be searched:");
	scanf("%d",&x);
	
	while(beg<=end){
		mid=(beg+end)/2;
		if(a[mid]==x){
			pos=mid+1;
			f=1;
			break;
		}
		else if(a[mid]<x){
			beg=mid;
		}
		else
			end=mid;
		
	}
	if(f==1)
		printf("\nElement found at %d",pos);
	else
		printf("\nNot Found");
}
