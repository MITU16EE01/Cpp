#include <iostream>
using namespace std;

int main()
{
    int i, num, out = 0, x, m = 1;
    cin >> num;
    while (num > 0)
    {
        x = num % 2;
        out += m * x;
        m *= 10;
        num = num / 2;
    }
    cout << out;

    return 0;
}