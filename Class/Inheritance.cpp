#include <iostream>
using namespace std;
class Vehicle     /* Basis Class */
{
	public:   /* You can access attributes and methods in public part from anyplace. */
		Vehicle()
		{
			cout<<"That is a vehicle."<<endl;
		} 
	protected:  /* You can access attributes and methods in protected part from inside of the basis class and subclass. */ 
		string modelName;
		int modelNum;
		int fuelCapacity;
	private:   /* You can access attributes and methods in private part from only inside of the basis class. */
		int secretNum;
};
class BMW: public Vehicle   /* Sub Class */
{
};
int main()
{
	BMW c1;
	c1.modelNum = 5;
	cout<<c1.modelNum;
}
