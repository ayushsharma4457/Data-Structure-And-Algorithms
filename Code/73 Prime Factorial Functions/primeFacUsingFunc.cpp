#include <iostream>
using namespace std;

int prime(int n)
{
    int count = 0;
    if (n < 2)
        return 0;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 1)
        return 1;
    else
        return 0;
}

int factorial(int n)
{
    int ans = 1;
    while (n > 0)
    {
        ans = ans * n;
        n--;
    }

    return ans;
}

int main()
{
    int a, b;

    cout << "Enter The Number A: ";
    cin >> a;

    cout << "Enter The Number B: ";
    cin >> b;

    cout << prime(a) << endl;
    cout << prime(b) << endl;
    cout << prime(a - b) << endl;
    cout << factorial(a) << endl;
    cout << factorial(b) << endl;
    cout << factorial(a - b) << endl;

    return 0;
}