#include<iostream>
using namespace std;

int main()
{
    int num,i=0,a;
    cout<<"Enter the number\n";
    cin>>num;
    a =num;
    while (num !=0)
    {
        i++;
        num = num/10;
    }

    cout<<"There are "<<i<<" digits in "<< a <<endl;
    return 0;
}