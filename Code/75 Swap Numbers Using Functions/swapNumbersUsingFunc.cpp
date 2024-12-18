#include <iostream>
using namespace std;

int swap(int &n, int &m) // Pass By Reference
{
    int temp = n;
    n = m;
    m = temp;

    return n, m;
}

int main()
{
    int a, b;
    cout << "Enter The Number a: ";
    cin >> a;

    cout << "Enter The Number b: ";
    cin >> b;

    cout << "Number Before Swap a And b: " << a << " " << b << endl;

    swap(a, b);

    cout << "Number After Swap a And b: " << a << " " << b << endl;

    return 0;
}