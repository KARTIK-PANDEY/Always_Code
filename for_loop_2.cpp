#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "enter number to find Square: ";
    cin>> n;

    for (int i=1; i<=n; i=i+1)
    {
        cout<< "Square of "<<  i  << " is "<< i*i<<endl;
    }
}