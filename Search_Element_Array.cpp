#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 7, 11, 8, 4};
    int index=0;
    int x;
    cout<<"Enter Element to search:- ";
    cin>>x;

    for(int i=0; i<=6; i++)
    {
        if(arr[i]==x)
        {
            index= i;
        }
    }
    cout<<"Index of the Element is:- "<<index;

}