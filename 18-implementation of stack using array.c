// N.S ATHUL ANAND
// S3D
// 36
// 18-implementation of stack using array
#include<stdio.h>

int stack[100],choice,n=100,top,x,i;

void push()
{
	if(top>=n-1)
		printf("\n\t stack overflow");
	else
	{
		printf("enter the value to be pushed:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}

void pop()
{
	if(top<=-1)
	{
		printf("\n\t stack underflow");
	}
	else
	{
		printf("\n the poped element is %d",stack[top]);
		top--;
	}
}

void display()
{
	if(top>=0)
	{
		printf("\n the elements in stack\n");
		for(i=top;i>=0;i--)
		{
			printf("\n %d",stack[i]);
		}
		printf("\n press next choice");
	}
	else 
		printf("the stack is empty");
}

int  main()
{
	top=-1;
	do
	{
		printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\n\t EXIT POINT");
				break;
			default:
				printf("\n\t not valid choice");
		}
	
	}while (choice!=4);
	return 0;
}			

































	
