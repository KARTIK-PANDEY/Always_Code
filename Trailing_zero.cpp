#include<iostream>
using namespace std;

int trailingzero (int n)
{
    int count=0;

    while(n>=5)
    {
        count= count+ n/5;
        n/=5;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the Number:- ";
    cin>>n;

    cout<<trailingzero(n);
}