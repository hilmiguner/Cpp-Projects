#include <iostream>
using namespace std;
class Health
{
	int lenght;
	int weight;
	float ratio;
	public:
		void gettingLenghtAndWeight()
		{
			cout<<"Please enter the lenght: ";
			cin>>lenght;
			cout<<"Please enter the weight: ";
			cin>>weight;
		}
		float calculatingRatio()
		{
			ratio = lenght / weight;
			return ratio;
		}
		bool healthStatus()
		{
			if (ratio < 2 || ratio > 2)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
};
int main()
{
	int patientNumber;
	cout<<"How many patient do you have: ";
	cin>>patientNumber;
	Health patient[patientNumber];
	for (int i = 0 ; i < patientNumber ; i++)
	{
		patient[i].gettingLenghtAndWeight();
		patient[i].calculatingRatio();
		patient[i].healthStatus();
		if (patient[i].healthStatus() == true)
		{
			cout<<"Your health is good."<<endl;
		}
		else if (patient[i].healthStatus() == false)
		{
			cout<<"Your health is not good, please contact a doctor."<<endl;
		}
	}
}
