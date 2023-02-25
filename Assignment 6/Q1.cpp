#include<iostream>
#include <math.h>
using namespace std;

    int sqr(int i)
    {
        return (i*i);
    }
int main()
{
    int n;
    cout << "This program will print sqaure of next fivr numbers";
    cout << "Enter the first number: \n";
    cin >> n;
    for (int i = n; i <= n+5; i++)
    {
        printf("%d ",sqr(i));
    }
    return 0;
}