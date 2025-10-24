#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"Enter Number to Break with:- ";
    cin>>n;
    while (i<=10)
    {
        /* code */
        if(i==n)
        break;
        cout<<i<<endl;
        i++;
    }
    
}