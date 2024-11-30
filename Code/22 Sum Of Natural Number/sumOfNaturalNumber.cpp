#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;

    cout << "Enter The Number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "Sum Of " << num << " Natural Number : " << sum;

    return 0;
}