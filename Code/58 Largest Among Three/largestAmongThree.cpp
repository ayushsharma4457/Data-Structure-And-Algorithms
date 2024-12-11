#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter The Number A: ";
    cin >> a;

    cout << "Enter The Number B: ";
    cin >> b;

    cout << "Enter The Number C ";
    cin >> c;

    if (a > b && a > c)
        cout << "A Is Greater";

    else if (b > a && b > c)
        cout << "B Is Greater";

    else
        cout << "C Is Greater";

    return 0;
}