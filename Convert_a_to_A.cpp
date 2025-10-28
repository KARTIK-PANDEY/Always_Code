#include<iostream>
using namespace std;

char convert (char name)
{
    char ans;
    ans= name - 'a' + 'A';
    return ans;
}

int main()
{
    char name;
    cout<<"Enter the Alphabet:- ";
    cin>>name;

    cout<<"Conversion is as Follows:- "<<convert(name);

}