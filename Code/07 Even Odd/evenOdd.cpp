#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter The Number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}
