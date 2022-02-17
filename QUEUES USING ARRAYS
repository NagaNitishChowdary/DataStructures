
//implementing queues using arrays

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 20

int a[MAX];
int front=-1,rear=-1;

void enqueue(int x)
{
	if(rear==MAX-1)
	{
		printf("Queue Overflow\n");
	}
	else
	{
		if(front==-1)
		{
			front=rear=0;
		}
		else
		{
		    ++rear;
		}
		a[rear]=x;
	}
}

int dequeue()
{
	int x;
	if(front==-1)
	{
		return -1;
	}
	else
	{
		x=a[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			++front;
		}
		return x;
	}
}

void display()
{
	int i;
	if(front==-1)
	{
		printf("no elements in queue to print\n");
	}
	else
	{
	for(i=front;i<=rear;i++)
	{
		printf("%3d->",a[i]);
	}
}
}

void main()
{
	int ch,x;
	while(1)
	{
		printf("1:enqueue\n2:dequeue\n3:display\n4:exit\n");
		printf("enter ur choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter element to insert into the queue\n");
			scanf("%d",&x);
			enqueue(x);
			break;
			case 2:x=dequeue();
			if(x==-1)
			{
				printf("Queue underflow\n");
			}
			else
			{
				printf("element deleted is %d\n",x);
			}
			break;
			case 3:printf("the elements in queue are:\n");
			display();
			break;
			case 4:exit(0);
			default:printf("enter valid choice\n");			
		}
	}
}
