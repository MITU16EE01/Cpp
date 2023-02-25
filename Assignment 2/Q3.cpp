#include<iostream>
using namespace std;

int main()
{
    int total = 45, boys = 25, boys_A = 17, girl, girl_A, total_A;
    total_A = 0.8 *total;
    girl = total - boys;
    girl_A = total_A -  boys_A;
    cout<<"Out of "<<girl<<" girl "<<girl_A<<" girl got A"<<endl;
    return 0;
}