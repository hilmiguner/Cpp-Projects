#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int num)
{
    int left = 0;
    int right = (l-1);
    int mid;
    while (left <= right)
    {
        mid = (left + right)/2;
        if(num < arr[mid])
        {
            right = mid - 1;
        }
        else if (num > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 7, 8, 10, 14, 21, 22, 36, 62, 77, 81, 91};
    int l = sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr, l, 8)<<endl;
    cout<<binarySearch(arr, l, 0)<<endl;
    return 0;
}