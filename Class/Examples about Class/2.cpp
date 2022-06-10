#include <iostream>
using namespace std;
class Students
{
	int mark[3];
	string name;
	public:
		string gettingName()
		{
			cout<<"Please enter your name: ";
			cin>>name;
			return name;
		}
		void gettingMarks()
		{
			cout<<"Please enter the first mark: ";
			cin>>mark[0];
			cout<<"Please enter the second mark: ";
			cin>>mark[1];
			cout<<"Please enter the third mark: ";
			cin>>mark[2];
		}
		float averageMark()
		{
			return ((mark[0]+mark[1]+mark[2])/3);
		}
		void displaying()
		{
			if (averageMark() >= 10)
			{
				cout<<"Student "<<name<<": "<<"Congratulation you passed.";
			}
			else
			{
				cout<<"Student "<<name<<": "<<"Sorry, you did not pass.";
			}
			cout<<endl;
		}
};
int main()
{
	int studentNumber;
	cout<<"How many students do you have: ";
	cin>>studentNumber;
	Students s[studentNumber];
	for (int i = 0 ; i < studentNumber ; i++)
	{
		s[i].gettingName();
		s[i].gettingMarks();
		s[i].averageMark();
		s[i].displaying();
	}
}
