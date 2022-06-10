#include <iostream>
#include "Library\LL.cpp"
using namespace std;

const int SIZE = 10;

int heapFunc(int data)
{
	return (data%SIZE);
}

void insertHeap(node* arr[], int data)
{
	int index;
	index = heapFunc(data);
	arr[index] = insert_end(arr[index], create(data));
}

void searchHeap(node* arr[], int data)
{
	int index;
	index = heapFunc(data);
	search(data, arr[index]);
}

void deleteHeap(node* arr[], int data)
{
	int index;
	index = heapFunc(data);
	arr[index] = del_spec_value(data, arr[index]);
}

int main()
{
	node* heapArr[10];
	
	// Making null array.
	for(int i = 0 ; i < SIZE ; i++)
	{
		heapArr[i] = NULL;
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
		printLL(heapArr[i]);
	}
	
	// Searching a key in the heap array.
	searchHeap(heapArr, 12);
	searchHeap(heapArr, 31);
	searchHeap(heapArr, 102);
	
	// Deleting a key in the heap array.
	deleteHeap(heapArr, 12);
	deleteHeap(heapArr, 31);
	deleteHeap(heapArr, 62);
	deleteHeap(heapArr, 3);
	
	// Displaying the heap array again after the deleting process.
	for (int i = 0 ; i < SIZE ; i++)
	{
		cout<<i<<". index = ";
		printLL(heapArr[i]);
	}
}
