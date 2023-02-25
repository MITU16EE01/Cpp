#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    char ope;
    cout<<"Enter an operator (+,-,*,/)\n";
    cin>>ope;
    cout<<"Enter the two numbers: \n";
    cin>>num1>>num2;

    switch (ope)
    {
    case '+':
        cout<<num1<< "+" <<num2<< " = " <<(num1+num2)<<endl;
        break;
    case '-':
        cout<<num1<< "-" <<num2<<  " = " <<(num1-num2)<<endl;
        break;
    case '*':
        cout<<num1<< "*" <<num2<< " = " <<(num1*num2)<<endl;
        break;
    case '/':
        cout<<num1<< "/" <<num2<< " = " <<(num1/num2)<<endl;
        break;
    default:
        cout<<"Enter a valid operator (+,-,*,/)";
    }
    return 0;
}