#include<iostream>
using namespace std;

int main(){

    int row, col, n;
    cout<<" Enter the number for Right Pyramid:- ";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        for(col=row; col>=1; col--)
        {
            cout<<" "<<col;
        }
        cout<<endl;
    }
}