#include <bits/stdc++.h>
#define LL long long
using namespace std;
const LL mod = 1e9 + 7;
string ss;
LL n;
int main()
{
    cin >> ss >> n;
    LL len = (LL)ss.length();
    while (len < n)
    {
        LL s = len;
        while (s * 2 < n)
            s *= 2;
        n -= (s + 1);
        if (n == 0)
            n = s;
    }
    cout << ss[n - 1] << endl;
    return 0;
}
