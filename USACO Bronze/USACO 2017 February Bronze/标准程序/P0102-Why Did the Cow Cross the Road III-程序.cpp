#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define f first
#define s second
#define len(x) (int)x.size()

int main()
{
    int n;
    cin >> n;
    int time = 0;
    pair<int, int> a[n];
    for (auto &x : a)
    {
        cin >> x.f >> x.s;
    }
    sort(a, a + n);
    for (auto x : a)
    {
        if (time >= x.f)
        {
            time += x.s;
        }
        else
        {
            time += x.f - time;
            time += x.s;
        }
    }
    cout << time << '\n';
    return 0;
}