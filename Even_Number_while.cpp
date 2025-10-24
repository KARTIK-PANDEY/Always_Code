#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;

    cout<<"Enter the Number:- ";
    cin>>n;

    while(i<=n)
    {
        if(n%2==0)
        {
            cout<<"Number is EVEN"<<endl;
        }
        else
        {
            cout<<"Number is ODD"<<endl;
        }
        i=i+(n);
    }

}