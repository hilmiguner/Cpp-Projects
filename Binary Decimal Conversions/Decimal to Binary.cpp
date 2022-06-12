#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
	int num;
	int temp1,temp2=0,temp3,count = 0;
	bool check1;
	char binary[20];
	int powof2[] = {2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768};
	cout<<"Please enter a decimal number:";
	cin>>num;
	temp1 = num;
	if (num%2 == 1)
	{
		temp1 -= 1;
		binary[0] = '1';
	}
	else
	{
		binary[0] = '0';
	}
	for (int i = 0 ; i<15 ; i++)
	{
		if (powof2[i] == temp1)
		{
			binary[i+1] = '1';
			temp3 = i+1;
			check1 = false;
			break;
		}
		else
		{
			check1 = true;
		}
	}
	if (check1 == false)
	{
		for (int i = 0 ; i < temp3 ; i++)
		{
			if (binary[i] != '1')
			{
				binary[i] = '0';
			}
		}
		cout<<"The binary form of the decimal number is ";
		for (int i = 0 ; i < strlen(binary) ; i++)
		{
			cout<<binary[i];
		}
		cout<<".";
	}
	else if (check1)
	{
		x:
		for (int i = 0 ; i < 15 ; i++)
		{
			if (temp1 > powof2[i] && temp1 < powof2[i+1] )
			{
				binary[i+1] = '1';
				temp1 -= powof2[i];
				if(count == 0)
				{
					temp3 = i+1;
				}
				count++;
				goto x;
			}
			else if (temp1 == powof2[i])
			{
				if(count == 0)
				{
					temp3 = i+1;
				}
				binary[i+1] = '1';
				break;
			}
		}
		for (int i = 0 ; i < temp3 ; i++)
		{
			if (binary[i] != '1')
			{
				binary[i] = '0';
			}
		}
		cout<<"The binary form of the decimal number is ";
		for (int i = 0 ; i < strlen(binary) ; i++)
		{
			cout<<binary[i];
		}
		cout<<".";
	}
}
