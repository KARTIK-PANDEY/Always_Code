#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number to get Sum of:- ";
    cin>>n;
    int sum=0;
    int i=1;

    do
    {
        sum=sum+i;
        i++;
    } while (i<=n);
    cout<<"Sum of Numbers is:- "<<sum<<endl;
    
}