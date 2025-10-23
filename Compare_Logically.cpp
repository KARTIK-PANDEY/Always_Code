#include<iostream>
using namespace std;

int main(){

    int a, b, c;
    cout<<"Enter the First Number:- ";
    cin>>a;
    cout<<"Enter the Second Number:- ";
    cin>>b;
    cout<<"Enter the Third Number:- ";
    cin>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"A is Greatest";
        }
    }
    else if(b>c)
    {
        cout<<"B is Greatest";
    }
    else
    {
        cout<<"C is Greatest";
    }

        return 0;
    

}