#include <iostream>
using namespace std;
int main()
{
    int a = 9, b = 3, num, rev = 0;

    int ans = 0;

    ans = ans * 10 + a;
    ans = ans * 10 + b;

    while (ans > 0)
    {
        num = ans % 10;
        rev = rev * 10 + num;
        ans /= 10;
    }
    cout << rev;

    return 0;
}