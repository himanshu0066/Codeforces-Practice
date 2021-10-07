#include <bits/stdc++.h>
using namespace std;
#define N 20000
void solve()
{
    long long int n;
    cin >> n;
    long long int arr[N];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long int sum1 = arr[0], min1 = arr[0], sum2 = arr[1], min2 = arr[1];
    long long int s = sum1 * n + sum2 * n;
    for (int i = 2; i < n; i++)
    {
        if (i % 2 != 0)
        {
            sum2 += arr[i];
            min2 = min(min2, arr[i]);
        }
        else
        {
            sum1 += arr[i];
            min1 = min(min1, arr[i]);
        }

        int x2 = (i + 1) / 2;
        int x1 = i + 1 - x2;
        long long int s1 = sum1 + (n - x1) * min1;
        long long int s2 = sum2 + (n - x2) * min2;

        if (s > s1 + s2)
        {
            s = s1 + s2;
        }
    }
    cout << s << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}