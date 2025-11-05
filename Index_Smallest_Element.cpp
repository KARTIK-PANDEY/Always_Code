#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {3,4,11,2,6};
    int index = 0;
    for(int i=1; i<=4; i++)
    {
        if(arr[i]<arr[index])
        index=i;
    }
    cout<<"Index of Smallest Element is:- "<<index<<" and The Element is:- "<<""<<arr[index];

}