#include <iostream>
using namespace std;
int main()
{
    int sum = 0, i = 1, num;
    cout << "Enter The Number: ";
    cin >> num;
    do
    {
        sum += i;
        i++;
    } while (i <= num);

    cout << sum;

    return 0;
}