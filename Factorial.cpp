#include<iostream>
using namespace std;

int main()
{
    long int fact, num;
    cout<<"Enter a Number: ";
    cin>> num;

    fact = 1;
    for(long int i=1; i <= num; i++)
    {
        fact = fact*i;
    }

    cout<<"Factorial of the Number is: "<<fact;
    return 0;
    
}