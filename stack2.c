#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void push(int);
void pop();
void display();

int s[SIZE];
int top=-1;

void main()
{
	int ch,value;
	while(1)
	{
		printf("\nThe option are:");
		printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
		printf("\nSelect What you Want to Do:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\nEnter the vlaue to be inserted:");
					scanf("%d",&value);
					push(value);
					break;
			case 2:	pop();
					break;
			case 3: display();
					break;
			default:printf("\n***********Invalid Choice***************");
					exit(0);
		}
	}
}
void push(int item)
{
	if(top<SIZE-1)
	{
		s[++top]=item;
		printf("\n%d item is inserted in to the stack position %d\n",item,top+1);	
	}
	else
	{
		printf("\nThe stack Overflow\n");
	}
return;
}
void pop()
{
	if(top==-1)
	{
		printf("\nThe stack is Underflow\n");
	}
	else
	{
		printf("\nThe deleted item from the stack is %d\n",s[top]);
		top--;
	}
return;
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nStack Empty\n");
	}
	else
	{
		printf("\nThe elements of the stack are:");
		for(i=top;i>=0;i--)
		{
			printf("\ns[%d] is %d",i,s[i]);
		}
	}	
return;
}
		
