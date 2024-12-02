#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 4; row++)
    {

        for (int col = 1; col <= 4 - (row - 1); col++)
        {
            cout << char('A' + col - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}