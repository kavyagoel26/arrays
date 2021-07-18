#include <iostream>
using namespace std;
bool pairsum(int n, int arr[], int x)
{
    int i;
    for (i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            break;
    int l = (i + 1) % n;
    int r = i;
    while (l != r)
    {
        if (arr[l] + arr[r] == x)
            return true;
        if (arr[l] + arr[r] < x)
            l = (l + 1) % n;
        else
            r = (n + r - 1) % n;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << pairsum(n, arr, x) << endl;
    return 0;
}