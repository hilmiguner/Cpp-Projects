#include<iostream>
#include "Library\LL.cpp"
using namespace std;

node* enqueue(node* head, int value)
{
	if (isEmpty(head))
	{
		head = insert_beg(head, create(value));
	}
	else
	{
		head = insert_end(head, create(value));
	}
	return head;
}

node* dequeue(node* head)
{
	if(isEmpty(head))
	{
		cout<<"You can not dequeue. Queue is already empty."<<endl;
	}
	else
	{
		head = del_first(head);
	}
	return head;
}

void printQ(node* head)
{
	if (head == NULL)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		while(head != NULL)
		{
			cout<<head->data<<" ";
			head = head->next;
		}
	}
}

int main()
{
	node* head = NULL;
	
	//Enqueue
	head = enqueue(head, 1);
	printQ(head);
	cout<<endl;
	
	head = enqueue(head, 2);
	printQ(head);
	cout<<endl;
	
	head = enqueue(head, 3);
	printQ(head);
	cout<<endl;
	
	cout<<"--------"<<endl;
	
	//Dequeue
	head = dequeue(head);
	printQ(head);
	cout<<endl;
	
	head = dequeue(head);
	printQ(head);
	cout<<endl;
	
	head = dequeue(head);
	printQ(head);
	cout<<endl;
	
	head = dequeue(head);	
}
