#include <iostream>
using namespace std;
int main()
{
    int num, fac = 1;

    cout << "Enter The Number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }

    cout << "Factorial Of " << num << " : " << fac;

    return 0;
}