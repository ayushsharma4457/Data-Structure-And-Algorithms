#include <iostream>
using namespace std;

char convert(char n)
{
    n = (n - 32);
    return n;
}
int main()
{
    char alpha;
    cout << "Enter The Smaller Character: ";
    cin >> alpha;

    cout << convert(alpha);

    return 0;
}