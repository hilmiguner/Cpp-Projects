#include <iostream>
using namespace std;
class Box
{
	int lenght;
	int breadht;
	int height;
	string name;
	int volume;
	string tempname;
	public:
		Box()
		{
			lenght = 5;
			breadht = 10;
			height = 2;
		}
		Box(int lenght,int breadht,int height)
		{
			this->lenght = lenght;
			this->breadht = breadht;
			this->height = height;
		}
		string Name()
		{
			cout<<"Please enter name of the box: ";
			cin>>name;
			return name;
		}
		int Volume()
		{
			cout<<"Volume of the box is "<<(lenght*breadht*height)<<endl;
			volume = (lenght*breadht*height);
			return (lenght*breadht*height);
		}
		void Compare(Box a, Box b)
		{
			if(a.volume < b.volume)
			{
				cout<<a.name<<"'s volume is smaller than "<<b.name<<"'s volume.";
			}
			else if (a.volume > b.volume)
			{
				cout<<a.name<<"'s volume is bigger than "<<b.name<<"'s volume.";
			}
			else
			{
				cout<<a.name<<"'s volume is equal to "<<b.name<<"'s volume.";
			}
		}
};
int main()
{
	Box b1,b2(2,2,5);
	b1.Name();
	b1.Volume();
	b2.Name();
	b2.Volume();
	b1.Compare(b1,b2);
}
