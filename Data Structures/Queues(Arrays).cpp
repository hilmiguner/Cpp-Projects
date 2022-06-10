#include <iostream>
using namespace std;

const int SIZE = 5;
int front = -1;
int rear = -1;

bool isEmpty()
{
	if ((front == -1) && (rear == -1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull()
{
	if ((rear == front-1) || ((rear == SIZE-1) && (front == 0)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void enqueue(int a[], int value)
{
	if (isEmpty())
	{
		front++;
		rear++;
		a[rear] = value;
	}
	else if (isFull())
	{
		cout<<"Queue is full, you can not enqueue."<<endl;
	}
	else
	{
		if (rear == SIZE-1)
		{
			rear = 0;	
		}
		else
		{
			rear++;
		}
		a[rear] = value;
	}
}

void dequeue(int a[])
{
	if (isEmpty())
	{
		cout<<"Queue is empty, you can not dequeue."<<endl;
	}
	else if (front == rear)
	{
		front = -1;
		rear = -1;
		cout<<"Queue is clear now."<<endl;
	}
	else
	{
		front++;
	}
}

void printQ(int a[])
{
	for (int i = front ; i != rear+1 ; i++)
	{
		if(front < rear)
		{
			cout<<a[i]<<" ";
		}
		else if(front > rear)
		{
			if (i == SIZE-1)
			{
				cout<<a[i]<<" ";
				i = -1;
			}
			else
			{
				cout<<a[i]<<" ";
			}
		}
		else
			{
				cout<<a[i]<<" ";
			}
	}
}

int main()
{
	int arr[SIZE];
	
	//Enqueue
	enqueue(arr, 5);
	enqueue(arr, 8);
	enqueue(arr, 25);
	enqueue(arr, 31);
	enqueue(arr, 2);
	printQ(arr);
	cout<<endl;
	
	cout<<"----------"<<endl;
	
	//Overflow
	enqueue(arr, 555);
	printQ(arr);
	cout<<endl;
	
	cout<<"----------"<<endl;
	
	//Dequeue
	dequeue(arr);
	printQ(arr);
	cout<<endl;
	
	dequeue(arr);
	printQ(arr);
	cout<<endl;
	
	dequeue(arr);
	printQ(arr);
	cout<<endl;
	
	dequeue(arr);
	printQ(arr);
	cout<<endl;
	
	dequeue(arr);
	
	dequeue(arr);
	
	cout<<"----------"<<endl;
	
	//Enqueue again
	enqueue(arr, 1);
	printQ(arr);
	cout<<endl;
	
	enqueue(arr, 2);
	printQ(arr);
	cout<<endl;
	
	enqueue(arr, 3);
	printQ(arr);
	cout<<endl;
	
	enqueue(arr, 4);
	printQ(arr);
	cout<<endl;
	
	enqueue(arr, 5);
	printQ(arr);
	cout<<endl;
	
	enqueue(arr, 6);
}
