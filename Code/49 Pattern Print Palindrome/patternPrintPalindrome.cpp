#include <iostream>
using namespace std;
int main()
{
    int total_rows;

    cout << "Enter Total Number Of Rows: ";
    cin >> total_rows;

    for (int row = 1; row <= total_rows; row++)
    {
        for (int col = 1; col <= total_rows - row; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        for (int col = row - 1; col >= 1; col--)
        {
            cout << col;
        }

        cout << endl;
    }

    return 0;
}