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