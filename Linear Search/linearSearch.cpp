#include <iostream>
using namespace std;

int linearSearch(int arr[], int l, int num)
{
    for (int i = 0 ; i < l ; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 34, 5, 89, 23};
    int l = sizeof(arr)/sizeof(arr[0]);
    cout<<linearSearch(arr, l, 5)<<endl;
    cout<<linearSearch(arr, l, 0)<<endl;
}