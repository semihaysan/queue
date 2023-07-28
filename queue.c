#include <stdio.h>
#include <conio.h>
#define MAX 10

int queue[MAX];
int front=-1 , rear=-1;

void insert(int queue[])
{
	int num;
	printf("kac eklemek istiyorsunuz ?");
	scanf("%d",&num);
	if(rear == MAX-1)
	{
		printf("kuyruk dolu oldugu icin ekleme yapilamiyor");
	}
	else if(front == -1  &&  rear == -1 )
	{
		front=rear=0;
	}
	else
	{
		rear++;
	}
	queue[rear]=num;
}
void del(int queue[])
{
	if(front==-1 || front>rear)
	{
		printf("kuyruk bos oldugu icin eleman silemezsin");
	}
	else
	{
		printf("silinen eleman %d \n", queue[front]);
		front++;
		if(front>rear)
		{
			front=rear=-1;
		}
	}
}
void peek(int queue[])
{
	if(front==-1 || front>rear)
	{
		printf("kuyruk bos");
	}
	else
	{
		printf("kuyrugun en basidanki eleman =  %d\n",queue[front]);
	}
}
void display(int queue[])
{
	int i;
	if(front==-1 || front > rear)
	{
		printf("kuyruk bos");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}




int main()
{
	insert(queue);
	insert(queue);
	insert(queue);
	display(queue);
	del(queue);
	display(queue);
	peek(queue);
	
	
	
}
