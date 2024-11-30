#include <iostream>
using namespace std;
int main()
{
    int num1 = 1, num2 = 1, num, temp;

    cout << "Enter The Number Of Terms: ";
    cin >> num;

    if (num == 1)
    {
        cout << num1 << endl;
    }

    else if (num == 2)
    {
        cout << num1 << endl
             << num2;
    }

    else
    {
        cout << num1 << endl
             << num2 << endl;
        for (int i = 3; i <= num; i++)
        {
            temp = num1 + num2;
            num1 = num2;
            num2 = temp;

            cout << temp << endl;
        }
    }

    return 0;
}