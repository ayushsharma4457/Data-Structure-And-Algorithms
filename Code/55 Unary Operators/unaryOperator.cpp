#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 11;
    cout << ++a << endl;
    a++;
    cout << a++ << endl;
    cout << a << endl;

    cout << b-- << endl
         << --b << endl;

    return 0;
}