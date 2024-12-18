#include <iostream>
using namespace std;

int sum(int n, int m)
{
    return n + m;
}

int main()
{
    int a, b, c, d;
    cout << "Enter The Numbers: ";
    cin >> a >> b >> c >> d;

    cout << "Sum Of Four Numbers: " << endl;
    cout << sum(a, b) << endl;
    cout << sum(b, c) << endl;
    cout << sum(c, d) << endl;
    cout << sum(d, a) << endl;

    return 0;
}