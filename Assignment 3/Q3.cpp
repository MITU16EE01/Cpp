#include<iostream>
using namespace std;

int main()
{
    int sp, cp;
    cout<<"Enter Selling price of item: ";
    cin>>sp;
    cout<<"Enter cost price of item: ";
    cin>>cp;
    if (sp>cp)
    {
        cout<<"Profit = "<<(sp-cp)<<endl;
    }
    else
    {
        cout<<"Loss = "<<(cp - sp)<<endl;
    }
    
    return 0;
}