#include <iostream>
using namespace std;
int main()
{
    int table_start, start_num, end_num, table_end;

    cout << "Table Start From: ";
    cin >> table_start;

    cout << "Table End In: ";
    cin >> table_end;

    cout << "Table Numbers Start From: ";
    cin >> start_num;

    cout << "Table Number End In: ";
    cin >> end_num;

    for (int i = table_start; i <= table_end; i++)
    {
        cout << "Table Of " << i << endl;
        cout << endl;
        for (int j = start_num; j <= end_num; j++)
        {
            cout << i << "*" << j << "=" << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}