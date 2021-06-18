#include <bits/stdc++.h>
using namespace std;
int n, a[100005], ans;
int out[100005], in[100005];
queue<int> q;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        in[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        in[a[tmp]]--;
        if (in[a[tmp]] == 0)
        {
            q.push(a[tmp]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (in[i] != 0)
        {
            ans++;
        }
    }

    cout << ans;
    return 0;
}