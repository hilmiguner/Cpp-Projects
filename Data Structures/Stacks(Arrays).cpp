#include <iostream>
using namespace std;

const int SIZE = 5;
int top = -1;

bool isEmpty()
{
	if (top == -1)
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
	if (top == SIZE-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void push(int a[], int value)
{
	if(isFull())
	{
		cout<<"Stack is already full, you can not add any data."<<endl;
	}
	else
	{
		top++;
		a[top] = value;
	}
}

void pop(int a[])
{
	if(isEmpty())
	{
		cout<<"Stack is already empty, you can not pop any data."<<endl;
	}
	else
	{
		top--;
	}
}

void printStack(int a[])
{
	if(isEmpty())
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		for(int i = 0 ; i <= top ; i++)
		{
			cout<<a[i]<<" ";
		}
	}
}

int main()
{
	int arr[SIZE];
	printStack(arr);
	
	//Pushing
	push(arr, 1);
	printStack(arr);
	cout<<endl;
	
	push(arr, 2);
	printStack(arr);
	cout<<endl;
	
	push(arr, 3);
	printStack(arr);
	cout<<endl;
	
	push(arr, 4);
	printStack(arr);
	cout<<endl;
	
	push(arr, 5);
	printStack(arr);
	cout<<endl;
	
	push(arr, 6);
	
	cout<<"------------"<<endl;
	
	//Poping
	pop(arr);
	printStack(arr);
	cout<<endl;
	
	pop(arr);
	printStack(arr);
	cout<<endl;
	
	pop(arr);
	printStack(arr);
	cout<<endl;
	
	pop(arr);
	printStack(arr);
	cout<<endl;
	
	pop(arr);
	printStack(arr);
	cout<<endl;
	
	pop(arr);
	
}
