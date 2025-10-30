#include<iostream>
using namespace std;

int totalmove( int a, int b)
{
    int count=0;
    count+= min(8-a, 8-b);
    count+= min(8-a, b-1);
    count+= min(a-1, b-1);
    count+= min(a-1, 8-b);

    return count;
}

int main()
{
    int a, b;
    cout<<"Enter the 1st Position on Chess:- ";
    cin>>a;
    cout<<"Enter the 2nd Position on Chess:- ";
    cin>>b;

    cout<<"Total Move of Bishop will be:- "<< totalmove(a,b);


}