#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the Size of the Array:- ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the Element of the Array:- ";
        cin>>arr[i];
    }

     cout<<"Sorted Elements are:- ";

    for(int i=n-2; i>=0; i--)
    {
        bool swapped=0;
        for(int j=0; j<=i; j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
            swapped=1;
        }

        if(swapped=0)
        cout<<"Array is Already Sorted ";
    }
       
    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }

    cout<<endl<<" Thank you ";
}