#include <iostream>
using namespace std;

int armstrong(int n)
{
    int a = n, temp = 0;

    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;
        temp = temp * 10 + rem;
    }
    if (a == temp)
        return 1;

    else
        return 0;
}

int main()
{
    int num;

    cout << "Enter The Number: ";
    cin >> num;

    cout << armstrong(num);

    return 0;
}