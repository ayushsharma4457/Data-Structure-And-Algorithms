#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, square;

    cout << "Enter The Number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        square = i * i;
        sum += square;
    }
    cout << "Sum Of Square Of " << num << " Natural Number : " << sum;

    return 0;
}