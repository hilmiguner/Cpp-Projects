#include <iostream>
using namespace std;

struct node
{
	int data;
	node* previous;
	node* next;
};

bool isEmpty(node* head)
{
	if (head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

node* create(int value)
{
	node* ptr;
	ptr = new node;
	if (ptr == NULL)
	{
		cout<<"There is no memory available for the new node."<<endl;
		exit(1);
	}
	else
	{
		ptr->data = value;
		ptr->previous = NULL;
		ptr->next = NULL;
		return ptr;
	}
}

node* insert_beg(node* old, node* newNode)
{
	if (isEmpty(old))
	{
		old = newNode;
	}
	else
	{
		node* temp = old;
		newNode->next = temp;
		temp->previous = newNode;
		old = newNode;
	}
	return old;
}

node* insert_end(node* old, node* newNode)
{
	if (isEmpty(old))
	{
		old = newNode;
	}
	else
	{
		node* temp = old;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->previous = temp;
	}
	return old;
}

node* insert_after(int value, node* old, node* newNode)
{
	if (isEmpty(old))
	{
		old = newNode;
	}
	else
	{
		bool flag = true;
		node* temp = old;
		while(temp->data != value)
		{
			if (temp->next == NULL)
			{
				cout<<"There is no data as "<<value<<" in the list."<<endl;
				flag = false;
				break;
			}
			else
			{
				temp = temp->next;
			}
		}
		if(flag)
		{
			newNode->next = temp->next;
			newNode->previous = temp;
			temp->next->previous = newNode;
			temp->next = newNode;
		}
	}
	return old;
}

node* del_first(node* head)
{
	if (isEmpty(head))
	{
		cout<<"There is no element to erase in list."<<endl;
	}
	else
	{
		node* willDeleted = head;
		head = head->next;
		head->previous = NULL;
		delete willDeleted;
	}
	return head;
}

node* del_last(node* head)
{
	if (isEmpty(head))
	{
		cout<<"There is no element to erase in list."<<endl;
	}
	else
	{
		node* temp = head;
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		node* willDeleted = temp->next;
		temp->next = NULL;
		delete willDeleted;
	}
	return head;
}

node* del_spec_value(int willDeletedValue, node* head)
{
	if (isEmpty(head))
	{
		cout<<"There is no element to erase in list."<<endl;
	}
	else
	{
		bool flag = true;
		node* temp = head;
		while(temp->next->data != willDeletedValue)
		{
			if (temp->next->next == NULL)
			{
				cout<<"There is no data as "<<willDeletedValue<<" in the list."<<endl;
				flag = false;
				break;
			}
			else
			{
				temp = temp->next;
			}
		}
		node* willDeleted = temp->next;
		temp->next = temp->next->next;
		temp->next->previous = temp;
		delete willDeleted;
	}
	return head;
}

void printLL(node* head)
{
	if (isEmpty(head))
	{
		cout<<"There is no element to erase in list."<<endl;
	}
	else
	{
		while(head != NULL)
		{
			cout << head->data << " ";
			head = head->next;
		}
	}
}

int main()
{
	node* head = NULL;
	
	// Inserting
	head = insert_beg(head, create(1));
	head = insert_end(head, create(2));
	head = insert_end(head, create(3));
	head = insert_end(head, create(5));
	head = insert_after(3, head, create(4));
	printLL(head);
	cout<<endl;
	
	cout<<"----------"<<endl;
	
	// Deleting
	head = del_first(head);
	printLL(head);
	head = del_last(head);
	cout<<endl;
	printLL(head);
	head = del_spec_value(3, head);
	cout<<endl;
	printLL(head);
	cout<<endl;
	
	cout<<"----------"<<endl;
	
	// Inserting back
	head = insert_beg(head, create(1));
	head = insert_after(2, head, create(3));
	head = insert_end(head, create(5));
	printLL(head);
}
