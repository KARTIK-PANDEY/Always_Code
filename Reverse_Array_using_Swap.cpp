#include<iostream>
using namespace std;

int main()
{
    int arr[]={6, 8, 14, 11, 3, 9};
    int i=0;
    int j=6;

    while(i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout<<"Reversed array is:-";
    for(int i=1; i<=6; i++)
    {
        cout<<"  "<<arr[i];
    }
}