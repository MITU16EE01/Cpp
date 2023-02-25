#include<iostream>
using namespace std;

bool prime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
   int a;
   int b;
   cout<<"Enter the two numbers : ";
   cin>>a>>b;
   for(int i=a;i<=b;i++)
   {
       if(prime(i)){
           cout<<i<<" ";
       }
   }
}
