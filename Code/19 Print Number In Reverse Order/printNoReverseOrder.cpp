#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter The Number: ";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        cout << i << endl;
    }
    return 0;
}