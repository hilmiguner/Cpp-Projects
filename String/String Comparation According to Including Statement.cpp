#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[50],str2[50];
	int k = 0,i = 0,temp,temp2;
	bool check=false,check2=false,check3 = false,check4 = false;
	cout<<"Enter the first string: ";
	cin.getline(str1,50);
	cout<<"Enter the second string: ";
	cin.getline(str2,50);
	if (strlen(str1) == strlen(str2))
	{
		for (i = 0; i<= strlen(str1);i++)
		{
			if(str1[i]==str2[i])
			{
				check2 = true;
			}
		}
	}
	else if (strlen(str1) < strlen(str2))
	{
		check3 = true;
	}
	else if (strlen(str1) > strlen(str2))
	{
		check4 = true;
	}
	if (check3)
	{
		for (i = 0 ; i < strlen(str2);i++)
		{
			if (str1[0] == str2[i])
			{
				temp = i;
				temp2 = temp;
				break;		
			}
			else
			{
				check = false;	
			}	
		}
		for (i = 0 ; i < strlen(str1) ; i++)
		{
			if (str1[i] == str2[temp])
			{
				check = true;
			}
			else
			{
				check = false;
				break;
			}
			temp++;
		}
	}
	else if (check4)
	{
		for (i = 0 ; i < strlen(str1);i++)
		{
			if (str2[0] == str1[i])
			{
				temp = i;
				temp2 = temp;
				break;		
			}
			else
			{
				check = false;	
			}	
		}
		for (i = 0 ; i < strlen(str2) ; i++)
		{
			if (str2[i] == str1[temp])
			{
				check = true;
			}
			else
			{
				check = false;
				break;
			}
			temp++;
		}	
	}
	if (check2)
	{
		cout<<"Strings which you entered are same.";
	}
	else if (check && check3)
	{
		cout<<"The second string includes the first string from index "<<temp2<<".";
	}
	else if (check4 && check)
	{
		cout<<"The first string includes the second string from index "<<temp2<<".";
	}
	else if (check = false)
	{
		cout<<"No string includes other string.";
	}
}
