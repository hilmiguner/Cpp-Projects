#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"This is constructor from class A."<<endl;
		}
};
class B
{
	public:
		B()
		{
			cout<<"This is constructor from class B.";
		}
};
class subclass: public A, public B  /* Multi-Inheritance syntax */
{
};
int main()
{
	subclass obj1;
}
