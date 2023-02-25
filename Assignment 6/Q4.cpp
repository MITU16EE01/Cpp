#include<iostream>
using namespace std;

bool odd(int num)
{
    if (num % 2 ==0)
    {
        return false;
    }
    return true;
}

int main()
{
    int a,b;
    cout << "Enter two number for finding odd between them \n";
    cin>>a>>b;
    for (int i = a; i < b; i++)
    {
        if (odd(i))
        {
            cout<<i<<" ";
        }
        
    }
    
    return 0;
}