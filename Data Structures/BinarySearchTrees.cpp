#include <iostream>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

bool isEmpty(node* root)
{
	if(root == NULL)
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
	node* temp = new node;
	temp->data = value;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

node* findMax(node* root)
{
	node* max = root;
	while(max->right != NULL)
	{
		max = max->right;	
	}
	return max;
}

node* findMin(node* root)
{
	node* min = root;
	while(min->left != NULL)
	{
		min = min->left;	
	}
	return min;
}

bool search(node* root, int element)
{
	bool flag = false;
	while(root != NULL)
	{
		if(root->data == element)
		{
			flag = true;
			break;
		}
		else
		{
			if(element < root->data)
			{
				root = root->left;
			}
			else
			{
				root = root->right;
			}
		}
	}
	if(flag)
	{
		return true;
	}
	else
	{
		return false;
	}
}

node* insert(node* root, int element)
{
	node* temp = root;
	node* parent;
	if(isEmpty(temp))
	{
		root = create(element);
	}
	else
	{
		while(temp != NULL)
		{
			if(element == temp->data)
			{
				cout<<"BST don't take same values"<<endl;
				break;
			}
			parent = temp;
			if(element < temp->data)
			{
				temp = temp->left;
			}
			else
			{
				temp = temp->right;
			}
		}
		if(element < parent->data)
		{
			parent->left = create(element);
		}
		else
		{
			parent->right = create(element);
		}
	}
	return root;
}

node* delete_element(node* root, int element)
{
	if(isEmpty(root))
	{
		cout<<"Tree is already empty"<<endl;
	}
	else if(search(root, element))
	{
		node* temp = root;
		node* parent;
		while(element != temp->data)
		{
			if(element < temp->data)
			{
				parent = temp;
				temp = temp->left;
			}
			else if(element > temp->data)
			{
				parent = temp;
				temp = temp->right;
			}
		}
		// Case 1: No Child
		if(temp->left == NULL && temp->right == NULL)
		{
			if(parent->right == temp)
			{
				parent->right = NULL;
			}
			else
			{
				parent->left = NULL;
			}
			delete temp;
		}
		// Case 2 : One Child
		else if	(temp->left == NULL)
		{
			if(parent->left == temp)
			{
				parent->left = temp->right;
			}
			else
			{
				parent->right = temp->right;
			}
			delete temp;
		}
		else if	(temp->right == NULL)
		{
			if(parent->left == temp)
			{
				parent->left = temp->left;
			}
			else
			{
				parent->right = temp->left;
			}
			delete temp;
		}
		// Case 3 : Two Child
		else
		{
			parent->left = temp->left;
			parent->right = temp->right;
			delete temp;
		}
	}
	return root;
}

void preorderTraversal(node* root)
{
	if(isEmpty(root))
	{
		return;
	}
	cout<<root->data<<" ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

void inorderTraversal(node* root)
{
	if(isEmpty(root))
	{
		return;
	}
	inorderTraversal(root->left);
	cout<<root->data<<" ";
	inorderTraversal(root->right);
}

void postorderTraversal(node* root)
{
	if(isEmpty(root))
	{
		return;
	}
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	cout<<root->data<<" ";
}

void levelorderTraversal(node* root, int level)
{
	if(isEmpty(root))
	{
		return;
	}
	if (level == 1)
	{
		cout<<root->data<<" ";
	}
	else
	{
		levelorderTraversal(root->left, level-1);
		levelorderTraversal(root->right, level-1);
	}
}

int main()
{
	node* root = NULL;
	
	//Inserting
	root = insert(root, 10);
	
	root = insert(root, 8);
	
	root = insert(root, 3);
	
	root = insert(root, 1);
	
	root = insert(root, 5);
	
	root = insert(root, 9);
	
	root = insert(root, 15);

	root = insert(root, 13);

	root = insert(root, 16);

	root = insert(root, 18);

	root = insert(root, 17);

	root = insert(root, 20);
	preorderTraversal(root);
	cout<<endl;
	inorderTraversal(root);
	cout<<endl;
	postorderTraversal(root);
	cout<<endl;
	levelorderTraversal(root, 3);
	cout<<endl;
	
	cout<<"------------"<<endl;
	
	//Find Max and Min
	cout<<"Max data is "<<findMax(root)->data<<endl;
	cout<<"Min data is "<<findMin(root)->data<<endl;
	
	cout<<"------------"<<endl;
	
	//Searching
	int value = 16;
	if(search(root, value))
	{
		cout<<value<<" is found in tree."<<endl;
	}
	else
	{
		cout<<value<<" is not found in tree."<<endl;
	}
	value = 3;
	if(search(root, value))
	{
		cout<<value<<" is found in tree."<<endl;
	}
	else
	{
		cout<<value<<" is not found in tree."<<endl;
	}
	value = 0;
	if(search(root, value))
	{
		cout<<value<<" is found in tree."<<endl;
	}
	else
	{
		cout<<value<<" is not found in tree."<<endl;
	}
	
	cout<<"------------"<<endl;
}
