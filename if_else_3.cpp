#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;

    if(n>0)
    {
        cout<<"the Number is positive";
    }
    else if (n==0)
    {
        cout<< "the Number is zero";
    }
    else
    {
        cout<<"the Number is Negative";
    }
}