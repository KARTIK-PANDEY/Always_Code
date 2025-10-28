#include<iostream>
using namespace std;

int rectangle (int a, int b, int c, int d)
{
    if((a==b && c==d) || (a==c && b==d) || (a==d && c==b))
    return 1;
    else 
    return 0;
}

int main()
{
    int a, b, c, d;
    cout<<"Enter the first number:- ";
    cin>>a;
    cout<<"Enter the Second Number:- ";
    cin>>b;
    cout<<"Enter the Third Number:- ";
    cin>>c;
    cout<<"Enter the Fourth Number:- ";
    cin>>d;

    cout<<rectangle (a,b,c,d);
}