#include<iostream>
using namespace std;

int main()
{
    int len, bre;
    cout<<"Enter the length\n";
    cin>>len;
    cout<<"Enter the bredth\n";
    cin>>bre;
    if (int(len) == int(bre))
    {
        printf("This is a square");
    }
    else
    {
        printf("This is a rectangle");
    }
    return 0;
}