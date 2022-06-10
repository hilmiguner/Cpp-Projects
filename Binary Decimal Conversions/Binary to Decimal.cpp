#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
	char num[20];
	int temp = 0;
	bool check = true;
	cout<<"Please enter a binary number:";
	cin>>num;
	for (int i = 0 ; i < strlen(num)  ; i++)
	{
		if (num[i] == '1')
		{
			temp += pow(2,i);
		}
		else if (num[i] == '0')
		{
			continue;	
		}
		else
		{
			cout<<"A binary number can't have "<<num[i]<<". It must have only 1 and 0.";
			check = false;
			break;
		}	
	}
	if(check)
	{
		cout<<"The decimal form of the binary number is "<<temp<<".";
	}
}
