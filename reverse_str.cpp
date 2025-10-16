#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a word: ";
    cin>>str;
    string reverse = "";
    for (int i = str.length() -1; i>=0 ; i--){
        reverse = reverse + str[i];
    }
    cout<<"Reversed Word is: "<<reverse;
    return 0;
};