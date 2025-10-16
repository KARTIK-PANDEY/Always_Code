#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Number to find Prime : ";
    cin>>num;

    if (num<2)
    {
        cout<<"Number is not Prime";
        return 0;
    }
    else
    {
        for (int i = 2; i< num; i++)
        {
            if( num % i == 0)
            {
                cout<<"Number is not Prime";
                return 0;
            }
            
        }
    }

    cout<<"Number is Prime ";
    return 0;    

}