#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;

    cout << "Enter The Number: ";
    cin >> num;

    if (num == 0)
    {
        cout << "Number Is Zero: " << num;
        return 0;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            cout << num << " is Prime Number";
        }
        else
        {
            cout << num << " is Not Prime Number";
        }
    }

    return 0;
}