#include <iostream>

using namespace std;

int main()
{
    char character;

    cout << "Enter The Character: ";
    cin >> character;

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Not Vowel";
    }

    return 0;
}