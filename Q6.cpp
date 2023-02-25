#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"Enter the first number: \n";
    cin>>x;
    cout<<"Enter the second number: \n";
    cin >> y;
    z = x;
    x = y;
    y = z;
    cout<<"Swaped numbers are "<<x<<", "<<y<<""<<endl;
    return 0;
}