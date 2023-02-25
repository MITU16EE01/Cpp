#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    if (int(num)>0)
    {
        printf("%d",num);
    }
    else
    {
        printf("%d",(-1*int(num)));
    }

    return 0;
}