#include<iostream>
using namespace std;

int fact(int n)
{
    int ans=1;
    for(int i=1; i<=n; i++)
    {
        ans= ans*i;
    }
    return ans;
}

int main()
{
    int x;
    cout<<"Enter Number to print Factorial of:- ";
    cin>>x;

    cout<<"Factorial is:- "<<fact(x);
}