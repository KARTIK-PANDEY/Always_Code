#include<iostream>
using namespace std;

int main(){

    char name;
    cout<<"Enter the Alphabet :- ";
    cin>>name;

    if(name=='a' || name=='e' || name=='i' || name=='o' || name=='u')
    {
        cout<<"Alphabet is Vowel";
    }
    else
    {
        cout<<"Alphabet is Consonant";
    }
}