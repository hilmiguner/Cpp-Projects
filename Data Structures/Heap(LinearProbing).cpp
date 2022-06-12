#include <iostream>
using namespace std;

const int SIZE = 10;

int heapFunc(int data)
{
	return (data%SIZE);
}

bool isEmpty(int arr[])
{
	for(int i = 0 ; i < SIZE ; i++)
	{
		if(arr[i] == -1)
		{
			return true;
		}
	}
	return false;
}

void insertHeap(int arr[], int data)
{
	if(isEmpty(arr))
	{
		int index;
		index = heapFunc(data);
		if(arr[index] != -1)
		{
			while(arr[index] != -1)
			{
				index++;
				if(index == SIZE)
				{
					index = 0;
				}
			}
			arr[index] = data;
		}
		else
		{
			arr[index] = data;
		}	
	}
	else
	{
		cout<<"Array is not empty"<<endl;
	}
}

int main()
{
	int heapArr[SIZE];
	
	// Making -1 array.
	for(int i = 0 ; i < SIZE ; i++)
	{
		heapArr[i] = -1;
	}
	
	insertHeap(heapArr, 12);
	insertHeap(heapArr, 3);
	insertHeap(heapArr, 14);
	insertHeap(heapArr, 28);
	insertHeap(heapArr, 37);
	insertHeap(heapArr, 102);
	insertHeap(heapArr, 32);
	insertHeap(heapArr, 57);
	insertHeap(heapArr, 62);
	
	// Displaying the heap array.
	for (int i = 0 ; i < SIZE ; i++)
	{
		cout<<i<<". index = ";
		cout<<heapArr[i]<<endl;
	}
}
