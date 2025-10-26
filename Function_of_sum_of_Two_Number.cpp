#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int ans;
    ans = a+b;
    return ans;
}

int main(){
    int k, m;
    cout<<"Enter the First Number:- ";
    cin>>k;
    cout<<"Enter the Second Number:- ";
    cin>>m;

    cout<<"Sum is:- "<<sum(k,m);
}