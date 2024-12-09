#include <iostream>
using namespace std;
int main()
{
    cout << (4 > 5 < 8 == 4 > 5 != 1) << endl;
    cout << (5 < 5 > 4 == 1) << endl;

    if (5 > 2)
        cout << "Yes";

    else
        cout << "No";

    return 0;
}