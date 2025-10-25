#include<iostream>
using namespace std;

int main(){
    int x;
    int rem=0, ans=0;
    cout<<"Enter the Number:- ";
    cin>>x;

    while(x>9)
    {
        while(x!=0)
        {
            rem= x%10;
            x/=10;
            ans= rem + ans;
        }
        x=ans;
        cout<<"Sum is :- "<<x;
    }
}