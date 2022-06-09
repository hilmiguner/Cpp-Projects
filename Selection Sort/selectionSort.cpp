#include <iostream>
using namespace std;

void selectionSort(int arr[], int l)
{
    int lenght = l;
    int minIndex;
    int temp;
    for (int i = 0 ; i < lenght ; i++)
    {
        minIndex = i;
        for (int k = i ; k < lenght ; k++)
        {
            if (arr[k] < arr[minIndex])
            {
                minIndex = k;
            }
        }
        if (minIndex != i)
        {
            temp = arr[i];
            arr[i]  = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    int arr[] = {7, 4, 5, 9, 8, 2, 1};

    int l = sizeof(arr)/sizeof(arr[0]);

    cout<<"------------------"<<endl;
    cout<<"Before algorithm:"<<endl;
    cout<<"------------------"<<endl;
    for (int i = 0 ; i < l ; i++)
    {
        cout<<arr[i]<<endl;
    }

    selectionSort(arr, l);

    cout<<"------------------"<<endl;
    cout<<"After algorithm"<<endl;
    cout<<"------------------"<<endl;
    for (int i = 0 ; i < l ; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}