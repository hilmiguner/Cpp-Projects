#include <iostream>
#include "Library\LL.cpp"
using namespace std;

node* push(node* head, int value)
{
	if(isEmpty(head))
	{
		head = insert_beg(head, create(value));
	}
	else
	{
		head = insert_end(head, create(value));
	}
	return head;
}

node* pop(node* head)
{
	if(isEmpty(head))
	{
		cout<<"Stack is already empty, you can not pop."<<endl;
	}
	else
	{
		head = del_last(head);
	}
	return head;
}

int main()
{
	node* head = NULL;
	printLL(head);
	
	//Pushing
	head = push(head, 1);
	printLL(head);
	cout<<endl;
	
	head = push(head, 2);
	printLL(head);
	cout<<endl;
	
	head = push(head, 3);
	printLL(head);
	cout<<endl;
	
	head = push(head, 4);
	printLL(head);
	cout<<endl;
	
	cout<<"---------"<<endl;
	
	//Poping
	head = pop(head);
	printLL(head);
	cout<<endl;
	
	head = pop(head);
	printLL(head);
	cout<<endl;
	
	head = pop(head);
	printLL(head);
	cout<<endl;
	
	head = pop(head);
	printLL(head);
	cout<<endl;
	
	head = pop(head);
}
