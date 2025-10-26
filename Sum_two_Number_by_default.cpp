#include<iostream>
using namespace std;

int sum_default(int a, int b=6)
{
    int ans;
    ans= a+b;
    return ans;
}

int main()
{
    int k; //m;
    cout<<"Enter the first Number:- ";
    cin>>k;
    //cout<<"Enter the Second Number:- ";
    //cin>>m;

    cout<<"Sum is:- "<<sum_default(k) ; //m );
}