#include <iostream>
using namespace std;

void finalTrailing(int x)
{
    int rem, count = 0;
    while (x > 0)
    {
        rem = x % 10;
        x /= 10;
        if (rem == 0)
            count++;
        else
            break;
    }
    cout << "Number Of Zero's At Last: " << count;
}

void factorial(int n)
{
    int ans = 1;
    while (n > 0)
    {
        ans = ans * n;
        n--;
    }
    cout << "Factorial: " << ans << endl;
    finalTrailing(ans);
}

int main()
{
    int num;
    cout << "Enter The Number: ";
    cin >> num;

    factorial(num);
    return 0;
}