#include <iostream>
using namespace std;
int main()
{
    int num = 13, rem, mul = 1, ans = 0;
    while (num > 0)
    {
        rem = num % 2;
        num /= 2;
        ans = rem * mul + ans;
        mul *= 10;
    }
    cout << ans;

    return 0;
}