#include <iostream>
using namespace std;
class Test  /* Generally first case is uppercase but it is not necessary, just a habit. */
{
	int data1;
	float data2;
	public:
	void function1()
	{
		data1=2;
	}	
	float function2()
	{
		data2=3.5;
		return data2;
	}
};
int main()
{
	Test test1, test2;
	test1.function1();
	cout<<test2.function2();
}
