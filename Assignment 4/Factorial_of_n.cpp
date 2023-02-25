#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number whose factorial you want: ";
    cin>>num;
    long fct = 1;
    for (int i = 1; i<= num; i++)
    {
        fct *= i;
    }
    cout<<"The factorial of "<<num<<" is "<<fct<<endl;
    return 0;
}