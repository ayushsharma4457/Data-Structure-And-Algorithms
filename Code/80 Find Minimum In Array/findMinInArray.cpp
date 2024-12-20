#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // Min Value

    int arr[5] = {4, 6, 8, 2, 9};
    int ans = INT_MAX;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] < ans)
            ans = arr[i];
    }
    cout << ans << endl;

    // Max Value
    int ans1 = INT_MIN;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] > ans1)
            ans1 = arr[i];
    }
    cout << ans1;
    return 0;
}