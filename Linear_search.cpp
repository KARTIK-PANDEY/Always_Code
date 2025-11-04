#include<iostream> 
using namespace std;

int main()
{
    int Arr[6]={ 6, 7, 88, 99, 3006, 12822006};
    int x;
    cout<<"Enter the Number to Find:- ";
    cin>>x;
    bool flag = false;

    for(int i=0; i<6; i++)
    {
        if(Arr[i]==x)
        {
            cout<<"Element found at index "<<i;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout<<"Element Not Found ";
    }
}