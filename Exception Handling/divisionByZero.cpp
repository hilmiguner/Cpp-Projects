#include <iostream>
using namespace std;

int main()
{
    //Enter the second number "0".
    int x,y;
    bool loop = true;
    while (loop)
    {
        cout<<"Enter the first number: ";
        cin>>x;
        cout<<"Enter the second number: ";
        cin>>y;
        try
        {
            if (y == 0)
            {
                throw 0;
            }
            loop = false;
            float result = x/y;
            cout<<"Result of the division is "<<result<<"."<<endl;
        }
        catch(int value)
        {
            cout<<"Second number can NOT be zero !"<<endl;
        }
    }
    return 0;
}