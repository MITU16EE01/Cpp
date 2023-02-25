#include<iostream>
using namespace std;

float circle(int r){
    float circum = 2*3.14*r;
    float a = 3.14*r*r;
    printf("Area = %f \nCircumference = %f",a,circum);
}
int main()
{
    int r;
    cout << "Enter the radius of the circle ";
    cin>>r;
    circle(r);
    return 0;
}