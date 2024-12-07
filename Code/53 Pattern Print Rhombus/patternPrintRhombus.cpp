#include <iostream>
using namespace std;
int main()
{
    int total_rows;

    cout << "Enter The ToatL Rows: ";
    cin >> total_rows;

    for (int row = 1; row <= total_rows; row++)
    {
        for (int col = 1; col <= total_rows - row; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int row = total_rows; row >= 1; row--)
    {
        for (int col = 1; col <= total_rows - row; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}