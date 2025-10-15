#include <iostream>
using namespace std;

int main()
{
    int weekday;

    for (int i =1 ; i<6; i++)
    {
        cout<<"Enter Number for Weekday: ";
    cin>> weekday;

    if (weekday == 1)
    {
        cout<<" Today is Monday"<<endl;
    }
    else if (weekday==2)
    {
        cout<<" Today is Tuesday"<<endl;
    }
    else if (weekday==3)
    {
        cout<<" Today is wednesday"<<endl;
    }else if (weekday==4)
    {
        cout<<" Today is Thursday"<<endl;
    }else if (weekday==5)
    {
        cout<<" Today is Friday"<<endl;
    }else if (weekday==6)
    {
        cout<<" Today is Saturday"<<endl;
    }else if (weekday==7)
    {
        cout<<" Today is Sunday"<<endl;
    }
    else
    {
        cout<<"Invalid Input"<<endl;
    }

    }
    
}