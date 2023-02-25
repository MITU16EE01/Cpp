#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the two binary numbers: \n";
    cin>>num1>>num2;
    int bin,dec=0,count  = 0;
    
    if (num1>num2)
    {
        bin = num1;
    }
    else
    {
        bin = num2;
    }
    int temp = bin;
    while (bin>0)
    {
        int last = bin%10;
        if (last != 0){
            dec += pow(2,count);
        }
        bin /= 10;
        count += 1;
    }
    cout<<"The greater number is "<<dec;
    return 0;
}