#include<iostream>
using namespace std;

int main(){
    int add, sub, multiply, divide, modulus;
    int a, b;

    cout<<" Enter the First number:- ";
    cin>>a;
    cout<<" Enter the second number:- ";
    cin>>b;

    add= a+b;
    sub=a-b;
    multiply=a*b;
    divide=a/b;
    modulus=a%b;

    cout<<"Addition is:- "<<add<<endl;
    cout<<"Substraction is:- "<<sub<<endl;
    cout<<"Multiplication is:- "<<multiply<<endl;
    cout<<"Division is:- "<<divide<<endl;
    cout<<"Remainder is:- "<<modulus<<endl;

    return 0;
    


}