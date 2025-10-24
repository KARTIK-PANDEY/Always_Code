#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;

    cout<<"Enter the Number:- ";
    cin>>n;

    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<"factor of "<<n<<" is:- "<<i<<endl;
        }
        i=i+1;
    }
}