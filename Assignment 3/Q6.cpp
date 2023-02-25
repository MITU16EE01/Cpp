#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter Your Marks: ";
    cin>>marks;
    if (marks>=90)
    {
        cout<<"Your Grade is A+";
    }
    else if  (marks>=80 && marks <90)
    {
        cout<<"Your Grade is A";
    }
    else if  (marks>=70 && marks <80)
    {
        cout<<"Your Grade is B+";
    }
    else if  (marks>=60 && marks <70)
    {
        cout<<"Your Grade is B";
    }
    else if  (marks>=50 && marks <60)
    {
        cout<<"Your Grade is C";
    }
    else if  (marks>=40 && marks <50)
    {
        cout<<"Your Grade is D";
    }
    else if  (marks>=30 && marks <40)
    {
        cout<<"Your Grade is E";
    }
    else if  (marks>=0 && marks <30)
    {
        cout<<"Your Grade is F";
    }
    else
    {
        cout<<"Enter VAlid MArks";
    }
    return 0;
}