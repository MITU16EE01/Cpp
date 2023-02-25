#include<iostream>
using namespace std;

int main()
{
    int sum,x,m=1,out,count = 0;
    cout<<"Enter the number in decimal: ";
    cin>>sum;
    int num = sum;
    while (sum > 0)
    {
    x = sum%2;
    if (x == 0)
    {
        count += 1;
    }
    out += m*x;
    m *=10;
    sum = sum /2;
    }
    cout<<"The number of zeros in binary of "<<num<<" is "<<count;
    return 0;
}