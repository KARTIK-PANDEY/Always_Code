#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int arr[6]= {6, 66, 666, 66666, 666666, 666666666};

    int ans= INT8_MIN;
    for(int i=0; i<6; i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }

    cout<<"Largest Value of the Given Array is:- "<<ans;
}