#include<iostream>
using namespace std;

int main(){

    int num, rem, ans=0, mul=1;
    cout<<"Enter the Binary for Decimal form:- ";
    cin>>num;

    while (num>0)
    {
        rem= num%10;
        num= num/10;
        ans= rem*mul+ ans;
        mul= mul*2;
    }
    cout<<"Decimal Number is as:- "<<ans;
}