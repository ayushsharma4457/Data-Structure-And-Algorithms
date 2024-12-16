#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter The Number: ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Ayush";
        break;

    case 2:
        cout << "Sharma";
        break;

    default:
        cout << "No Name";
        break;
    }
    return 0;
}