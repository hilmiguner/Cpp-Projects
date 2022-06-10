#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
void binarytodecimal()
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
			cout<<"A binary number can't have "<<num[i]<<". It must have only 1 and 0."<<endl;
			check = false;
			break;
		}	
	}
	if(check)
	{
		cout<<"The decimal form of the binary number is "<<temp<<"."<<endl;
	}	
}
void decimaltobinary()
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
		cout<<"."<<endl;
	}
	else if (check1)
	{
		if(num == 1)
		{
			cout<<"The binary form of the decimal number is 1";
			goto a;
		}
		else if (num == 0)
		{
			cout<<"The binary form of the decimal number is 0";
			goto a;
		}
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
		a:
		cout<<"."<<endl;
	}
}
int main()
{
	string answer;
	string answer2 = "Y";
	while (answer2 == "Y" || answer2 == "y")
	{
		y:
		cout<<"Write 'bd' for binary to decimal, 'db' for decimal to binary:";
		cin>>answer;
		if (answer == "bd" || answer == "BD")
		{
			binarytodecimal();
		}
		else if (answer == "db" || answer == "DB")
		{
			decimaltobinary();
		}
		else
		{
			cout<<"Please enter the word right."<<endl;
			goto y;
		}
		x:
		cout<<"Write 'Y' for try again or write 'N' for execute the program:";
		cin>>answer2;
		if (answer2 != "Y" && answer2 != "y" && answer2 != "N" && answer2 != "n")
		{
			cout<<"You entered something wrong !"<<endl;
			goto x;
		}
	}
	cout<<"See you later.";
}
