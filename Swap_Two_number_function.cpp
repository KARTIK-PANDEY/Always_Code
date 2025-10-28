#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main()
{
    int m, n;
    cout<<"Enter the First Number:- ";
    cin>>m;
    cout<<"Enter the Second Number:- ";
    cin>>n;
    swap(m,n);
    cout<<"Value of First Numbers is:- "<<m<<endl;
    cout<<"Value of Second Number is :- "<<n<<endl;
}
