#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the Size of Array:- ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the Element of Array:- ";
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j] < arr[j-1])
            swap(arr[j], arr[j-1]);

            else
            break;
        }
    }

    cout<<"Sorted Array Elements are:- ";

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}