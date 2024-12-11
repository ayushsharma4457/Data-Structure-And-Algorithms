#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 3;
    // AND
    int bitwise_and = a & b;
    cout << bitwise_and << endl;

    // OR
    int bitwise_or = a | b;
    cout << bitwise_or << endl;

    // XOR
    int bitwise_xor = a ^ b;
    cout << bitwise_xor << endl;

    // Not
    int bitwise_not = ~a;
    cout << bitwise_not << endl;

    // Left Shift
    int bitwise_leftShift = a >> 1;
    cout << bitwise_leftShift << endl;

    // Right Shift
    int bitwise_rightShift = a << 1;
    cout << bitwise_rightShift << endl;

    return 0;
}