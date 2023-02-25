#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if (num>=0)
    {
        cout<<num<<endl;
    }
    else
    {
        cout<<"The number is negative and skipped";
    }
    return 0;
}