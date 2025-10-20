#include<iostream>
using namespace std;

int main(){
    int row, col;
    char name;

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=row; col++)
        {
            name ='a'+ (row-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}