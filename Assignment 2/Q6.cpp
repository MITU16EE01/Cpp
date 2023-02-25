#include<iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout<<"Enter the first number: \n";
    cin>> n1;
    cout<<"Enter the second number: \n";
    cin>> n2;
    cout<<"Sum = "<<(n1+n2)<<endl;
    cout<<"diffrence = "<<(n1-n2)<<endl;
    cout<<"Product = "<<(n1*n2)<<endl;
    cout<<"Division = "<<float(n1/n2)<<endl;
    cout<<"Mod = "<<float(n1%n2)<<endl;
    return 0;
}