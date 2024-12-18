#include <iostream>
using namespace std;

int swap(int &n, int &m) // Pass By Reference
{
    int temp = n;
    n = m;
    m = temp;

    return n, m;
}

float swap(float &n, float &m) // Function Overloading
{
    float temp = n;
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

    float f1 = 3.6, f2 = 4.5;

    cout << "Number Before Swap f1 And f2: " << f1 << " " << f2 << endl;

    swap(a, b);

    cout << "Number After Swap a And b: " << a << " " << b << endl;

    swap(f1, f2);
    cout << "Number After Swap f1 And f2: " << f1 << " " << f2 << endl;

    return 0;
}