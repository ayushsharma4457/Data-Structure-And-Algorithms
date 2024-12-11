#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 15, c = 20, d = 5, e = 50;

    // Addition
    cout << (a += 5) << endl;

    // Subtraction
    cout << (b -= 5) << endl;

    // Multiplication
    cout << (c *= 5) << endl;

    // Divison
    cout << (d /= 5) << endl;

    // Modules
    cout << (e %= 5) << endl;

    return 0;
}