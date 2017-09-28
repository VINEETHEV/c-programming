#include<stdio.h>

int top=-1,a[10];
void push(int e)
{	if(top==9)
		printf("\n Stack Overflow!");
	else
	{	top++;
		a[top]=e;
	}
}
void pop()
{	if(top==-1)
		printf("\n Stack Empty!");
	else
	{	printf("\nDeleted Element:%d",a[top]);
		top--;
	} 
}	
void display()
{	int i;
	if(top==-1)
                printf("\n Stack Empty!");
        else
	{	for(i=0;i<=top;i++)
			printf("%d\n",a[i]);
	}

}

main()
{
	int choice,e;
	do
	{
		printf("\nMenu\n1.Push\n2.Pop\n3.Display\n4.Exit");
		scanf("%d",&choice);
		switch(choice)
		{	case 1: printf("\nEnter the element:");
				scanf("%d",&e);
				push(e);
				break;
			case 2: pop();
		        	break;
			case 3: display();
				break;
			case 4: printf("\nExiting.....");
				break;
			default: printf("\nINvalid!!");
		}
	}while(choice!=4);
}

