#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100001], n, q;
signed main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int x_p = lower_bound(a + 1, a + 1 + n, x) - a;
        int y_p = upper_bound(a + 1, a + 1 + n, y) - a;
        cout << y_p - x_p << endl;
    }
    return 0;
}