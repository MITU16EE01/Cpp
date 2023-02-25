#include<iostream>
using namespace std;

int main()
{
    int num,i=0;
    cout<<"Enter the number\n";
    cin>>num;
    while (num != 0)
    {
        i += (num%10);
        if (num/10 == 0)
        {
            break;
        }
        i *=10;
        num /=10;
    }

    cout<<i<<endl;
    return 0;
}