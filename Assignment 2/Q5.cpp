#include<iostream>
using namespace std;

int main()
{
    int n, f, s,t;
    cin>>n;
    f = n/100;
    n = n%100;
    s = n/10;
    n = n%10;
    t = n;
    cout<<(f+s+t)<<endl;
    return 0;
}