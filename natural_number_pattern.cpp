#include<iostream>
using namespace std;

int main()
{
    int row, col,Count;
    Count =1;

    for(int row=1; row<=5; row++)
    {
        for(int col=1; col<=5; col++)
        {
            cout<<Count<<"  ";
            Count = Count+1;
        }
        cout<<endl;
    }
}