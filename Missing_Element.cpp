#include<iostream>
#include<vector>
using namespace std;

int missingNumber (vector<int> &array, int n)
{
    int sum=0;
    for(int i=0; i<n-1; i++)
    {
        sum+=array[i];
    }

    int ans= n*(n+1)/2;

    return ans-sum;

}

int main()
{
    vector<int> arr= {1,3,4,5,2};
    int n=6;
    cout<<"Missing Element is:- "<<missingNumber(arr, n);
}