#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    cout<<"Enter Number for Table:- ";
    cin>>n;

    while(i<=10)
    {
        cout<<n<<" x "<<i<<" = "<<n*i;
        cout<<endl;
        i++;
    }
}