#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[11], b[11];
    int ans = 0;
    memset(b, 0, sizeof(b));
    for (int i = 1; i <= n; i++)
    {
        int cow, side;
        cin >> cow >> side;
        if (b[cow] == 0)
        {
            b[cow] = 1;
            a[cow] = side;
        }
        else if (a[cow] != side)
        {
            ans++;
            a[cow] = side;
        }
    }
    cout << ans << endl;
    return 0;
}