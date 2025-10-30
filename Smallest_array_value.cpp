#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int arr [5] = {6, 5, 88, 22, 99};

    int ans = INT8_MAX;
    for(int i=0; i<5; i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }
    cout<<"Smallest Value of Array is:- "<<ans;
}