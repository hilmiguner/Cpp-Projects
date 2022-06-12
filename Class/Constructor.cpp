#include <iostream>
using namespace std;

class MyClass 
{     
	public:         
    	MyClass() // Constructor (A speacil function type)
		{     
			cout << "Hello World!";
    	}
};

int main() 
{
	MyClass myObj;    // Create an object of MyClass (this will immediately call the constructor)
}
