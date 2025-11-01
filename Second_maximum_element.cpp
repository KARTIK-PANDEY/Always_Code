#include<iostream>
using namespace std;


    int print2ndLargest (int arr[], int n)
    {
        int ans = -1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>ans)
            ans=arr[i];
        }

        int second=-1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!= ans)
            {
                second= max(second,arr[i]);
            }
        }
        return second;
    }

    int main()
{
    int arr[7]= {2,6,4,3,8,5,1};
    int n=7;
    cout<<"2nd Largest Element in Array is:- "<<print2ndLargest(arr, n);
}