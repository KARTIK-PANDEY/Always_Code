#include<iostream>
using namespace std;

int main(){
    int Year;
    cout<<"Enter the Year to check Leap Year:- ";
    cin>>Year;

    if(Year%400==0){
        cout<<"This is leap year, Wohooo";
    }
    else if(Year%4==0 && Year%100!=0)
    {
        cout<<"This is leap year, Wohooo";
    }
    else
    {
        cout<<"This is not Leap Year";
    }

}