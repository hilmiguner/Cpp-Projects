#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

bool isEmpty(node* head)
{
	if (head == NULL)
	{
		return true;
	}
	return false;
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
		delete willDeleted;
	}
	return head;
}

node* reverse(node* head)
{
	if (isEmpty(head))
	{
		cout<<"There is no element to erase in list."<<endl;
	}
	else
	{
		node* Iter1, *Iter2, *Iter3;
		Iter1 = head;
		Iter2 = Iter1->next;
		Iter1->next = NULL;
		while(Iter2 != NULL)
		{
			Iter3 = Iter2->next;
			Iter2->next = Iter1;
			Iter1 = Iter2;
			Iter2 = Iter3;
		}
		head = Iter1;
	}
	return head;
}

void search(int value, node* head)
{
	if (isEmpty(head))
	{
		cout<<"There is no element to erase in list."<<endl;
	}
	else
	{
		bool flag = false;
		while(head != NULL)
		{
			if(head->data == value)
			{
				cout<<value<<" is FOUND!"<<endl;
				flag = true;
				break;
			}
			head = head->next;
		}
		if(!flag)
		{
			cout<<value<<" is not FOUND!"<<endl;
		}
	}
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
	cout<<endl;
	
	cout<<"----------"<<endl;
	
	// Searching
	search(3, head);
	search(6, head);
	
	cout<<"----------"<<endl;
	
	// Reversing
	head = reverse(head);
	printLL(head);
	cout<<endl;
	
	cout<<"----------"<<endl;
	
	// Reversing back
	head = reverse(head);
	printLL(head);
	cout<<endl;
}
