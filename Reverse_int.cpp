#include<iostream>
using namespace std;

int main(){
    int num, rem, ans=0;
    cout<<"Enter the Number to Reverse:- ";
    cin>>num;

    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        ans= rem+ans*10;
    }
    cout<<"reversed Number is:- "<<ans;
}