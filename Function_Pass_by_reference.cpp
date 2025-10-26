#include<iostream>
using namespace std;

void increment(int &n)
{
    n++;
}

int main()
{
    int x;
    cout<<"Enter the Number:- ";
    cin>>x;
    increment(x);
    cout<<x;

}