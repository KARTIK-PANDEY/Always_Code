#include<iostream>
using namespace std;

int main()
{
    long int Num, Sum;
    cout<<"Enter a Number: ";
    cin>> Num;

    Sum= 0;
    for (long int i =1; i<=Num; i++)
    {
        Sum= Sum+i;
    }

    cout<<"Sum of Numbers are: "<<Sum;
    return 0;
}