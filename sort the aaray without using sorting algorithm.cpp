#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count0 = 0;
    int count1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count0++;
        if (arr[i] == 1)
            count1++;
    }
    int newa[n] = {0};
    for (int i = 0; i < count0; i++)
    {
        newa[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        newa[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++)
    {
        newa[i] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << newa[i] << " ";
    }

    return 0;
}