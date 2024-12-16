#include <iostream>
using namespace std;
int main()
{
    int tab, i = 1;
    cout << "Enter The Table: ";
    cin >> tab;
    while (i <= 10)
    {
        cout << tab << " * " << i << " = " << tab * i << endl;
        i++;
    }
    return 0;
}