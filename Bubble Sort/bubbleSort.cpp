#include <iostream>
using namespace std;

void bubbleSort(int arr[], int l)
{
    int lenght = l;
    int temp;
    bool swapped;
    for  (int i = 0 ; i < lenght - 1 ; i++)
    {
        swapped = false;
        for (int k = 0 ; k < lenght - 1 - i ; k++)
        {
            if (arr[k] > arr[k+1])
            {
                swapped = true;
                temp = arr[k+1];
                arr[k+1] = arr[k];
                arr[k] = temp;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {5, 1, 12, -5, 16};
    
    int l = sizeof(arr)/sizeof(arr[0]);

    cout<<"------------------"<<endl;
    cout<<"Before algorithm:"<<endl;
    cout<<"------------------"<<endl;
    for (int i = 0 ; i < l ; i++)
    {
        cout<<arr[i]<<endl;
    }

    bubbleSort(arr, l);

    cout<<"------------------"<<endl;
    cout<<"After algorithm"<<endl;
    cout<<"------------------"<<endl;
    for (int i = 0 ; i < l ; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}