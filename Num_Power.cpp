#include<iostream>
using namespace std;

int main()
{
    int num, pow, total;
    cout<<"Enter the Number: ";
    cin>> num;
    cout<<"Enter number for Power: ";
    cin>> pow;
    total=num; 

    for ( int i=1; i < pow; i++)
    {
        total = total*num;
    }

    cout<< "Power of number is: "<<total;

}