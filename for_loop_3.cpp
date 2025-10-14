#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number to find Even: ";
    cin >> n;

    for (int i =1; i <=n ; i++)
    {
        if (i%2 == 0)
        cout<< "even numbers is: " << i <<endl;
        else
        {
            cout<< "odd numbers is: " << i << endl;
        }
    }
}