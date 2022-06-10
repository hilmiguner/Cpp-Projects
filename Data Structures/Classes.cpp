#include<iostream>
using namespace std;

class Rectangle
{
	private:
		int width;
		int lenght;
	public:
		static int count;
		Rectangle()
		{
			count++;
		}
		Rectangle(int w, int l)
		{
			width = w;
			lenght = l;
		}
		void set(int w, int l)
		{
			width = w;
			lenght = l;
		}
		int area()
		{
			return width*lenght;
		}
		void printCount()
		{
			cout<<count<<endl;
		}
};

int Rectangle::count = 0;

int main()
{
	Rectangle o1;
	o1.set(5,10);
	int result = o1.area();
	cout<<result<<endl;
	Rectangle o2, o3, o4;
	// We created 4 objects for now.
	cout<<Rectangle::count<<endl;
	
	cout<<"-----------------"<<endl;
	
	// Also you can use pointers.
	
	Rectangle *ptr = &o2;
	ptr->set(50,2);
	result = ptr->area();
	cout<<result<<endl;
	
	cout<<"-----------------"<<endl;
	
	Rectangle o5(3,4);
	result = o5.area();
	cout<<result<<endl;
}
