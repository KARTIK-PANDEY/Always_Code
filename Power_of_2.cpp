#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number:- ";
    cin>>num;

    if(num<1)
    {
        cout<<"Given Number is not Power of 2";
    }
    while(num>1)
    {
        if(num%2==1)
        {
            cout<<"Given Number is not Power of 2";
            break;
        }
        else if(num%2==0)
        {
            cout<<"Number is Power of 2";
            num/=2;
            break;
        }
        else
        {
            break;
        }
    }
}