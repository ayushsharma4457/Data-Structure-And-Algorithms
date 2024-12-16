#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 10;
    for (int i = 1; i <= num; i++)
    {
        if (i == 5 || i == 6 || i == 7 || i == 8)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}