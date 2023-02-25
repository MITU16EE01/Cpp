#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans += i;
    }
    
    cout<< ans<<endl;
    return 0;
}