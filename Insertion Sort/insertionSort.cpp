#include <iostream>
using namespace std;

void insertionSort(int arr[], int l)
{
    int lenght = l;
    int temp;
    for (int i = 1 ; i < lenght ; i++)
    {
        int k = i;
        while (k != 0 && arr[k] < arr[k-1])
        {
            temp = arr[k-1];
            arr[k-1] = arr[k];
            arr[k] = temp;
            k--;
        }
    }
}

int main()
{
    int arr[] = {65, 50, 30, 35, 25, 45};

    int l = sizeof(arr)/sizeof(arr[0]);

    cout<<"------------------"<<endl;
    cout<<"Before algorithm:"<<endl;
    cout<<"------------------"<<endl;
    for (int i = 0 ; i < l ; i++)
    {
        cout<<arr[i]<<endl;
    }

    insertionSort(arr, l);

    cout<<"------------------"<<endl;
    cout<<"After algorithm"<<endl;
    cout<<"------------------"<<endl;
    for (int i = 0 ; i < l ; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}