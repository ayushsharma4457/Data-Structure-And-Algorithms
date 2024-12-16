#include <iostream>
using namespace std;
int main()
{
    int num, i = 1;
    cout << "Enter The Number: ";
    cin >> num;

    while (i <= num)
    {
        if (i % 2 == 0)
            cout << i << endl;

        i++;
    }
    return 0;
}