#include<iostream> 
using namespace std;

int main()
{
    int arr[6]={6,11,7,4,8,9};
    int temp[6];

    int i=5;
    int j=0;

    while(i>=0)
    {
        temp[j]=arr[i];
        j++;
        i--;
    }

    //for(int i=0; i<=6; i++)
    //{
        //cout<<temp[i]<<endl;
        //cout<<"   "<<arr[i];
    //}


}
