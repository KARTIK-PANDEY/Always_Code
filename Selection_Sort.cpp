#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {3,9,4,2,6};
    int n=5;

    for(int i=0; i<n-1; i++)
    {
        int index=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[index])
            index = j;
        }
        swap(arr[i], arr[index]);
    }
    cout<<"Sorted Array with Element is:- ";

    for(int i=0; i<=4; i++)
    {
        cout<<" "<<arr[i];
    }
}