#include<iostream>
using namespace std;

int main(){

    int num, rem, mul=1, ans=0;
    cout<<"Enter the Number:- ";
    cin>>num;
    int x=num;

    while(num!=0)
    {
        rem= num%10;
        num= num/10;
        ans= ans*10 +rem;
    }

    if (x==ans)
    {
        cout<<"Given Number is Pallindrome number";
    }
    else{
        cout<<"not a Pallindrome Number";
    }
}