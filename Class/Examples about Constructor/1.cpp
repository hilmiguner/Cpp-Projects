#include <iostream>
using namespace std;
class AreaOfRectangle
{
	int lenght;
	int breadht;
	public:
		AreaOfRectangle()
		{
			lenght = 5;
			breadht = 2;
		}
		void GetLenghtAndBreadht()
		{
			cout<<"Please enter the lenght: ";
			cin>>lenght;
			cout<<"Please enter the breadht: ";
			cin>>breadht;
		}
		int AreaCalculation()
		{
			return (lenght*breadht);
		}
		void DisplayArea()
		{
			cout<<"Area of the rectangle is "<<AreaCalculation()<<endl;
		}
};
int main()
{
	AreaOfRectangle A1,A2;
	A1.AreaCalculation();
	A2.AreaCalculation();
	A1.DisplayArea();
	A2.DisplayArea();
	
	A1.GetLenghtAndBreadht();
	A1.AreaCalculation();
	A1.DisplayArea();	
}
