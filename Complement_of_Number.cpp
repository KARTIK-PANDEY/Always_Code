#include<iostream>
using namespace std;

int main(){

    int num, rem, ans=0, mul=1;
    cout<<"Enter the to print It's Complement:- ";
    cin>>num;

    if(num==0)
    {
        cout<<"Complement is 0";
    }
    while(num!=0)
    {
        rem= num%2;
        rem= rem^1;
        num= num/2;
        ans= ans+ rem*mul;
        mul= mul*2;
    }
    cout<<"Complement of the Number is:- "<<ans;
}