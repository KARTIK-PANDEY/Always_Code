#include<iostream>
using namespace std;

int main()
{
    int arr[5]={7,4,8,1,5};

    for(int i=0; i<4; i++)
    {
        if(arr[i]> arr[i+1])
          swap(arr[i], arr[i+1]);
    }

}