#include<stdio.h>
main(){
	int n,i,fact;
	fact=1;
	printf("\nEnter No.:");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		fact=fact*i;
	}
	printf("factorial: %d",fact);
}
	
