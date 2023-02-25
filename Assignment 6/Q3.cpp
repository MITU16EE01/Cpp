#include<iostream>
using namespace std;

void votor(int p){
    if (p>=18)
    {
        cout <<"Yes";
    }
    else
    {
        cout <<"No";
    }
    
}
int main()
{
    int age;
    cout << "Enter your age please ";
    cin >> age;
    votor(age);
    return 0;
}