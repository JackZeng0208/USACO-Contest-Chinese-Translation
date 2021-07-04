#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;

#define MAXN 1010

int Q[MAXN];
int DP[MAXN];
int D[MAXN];
vector<int> E[MAXN];

int main()
{
    int N, ECST;
    cin >> N >> ECST;
    for (int i = 0; i < N; i++)
    {
        int D;
        cin >> Q[i] >> D;
        for (int j = 0; j < D; j++)
        {
            int v;
            cin >> v;
            E[i].push_back(v - 1);
        }
    }

    vector<int> PI;
    for (int i = 0; i < N; i++)
    {
        PI.push_back(i);
    }
    sort(PI.begin(), PI.end(), [&](int x, int y)
         { return Q[x] < Q[y]; });

    int result = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        int u = PI[i];

        queue<int> q;
        memset(D, -1, sizeof(D));
        q.push(u);
        D[u] = 0;
        while (!q.empty())
        {
            int v = q.front();
            q.pop();
            for (int i = 0; i < E[v].size(); i++)
            {
                int nv = E[v][i];
                if (D[nv] == -1)
                {
                    D[nv] = D[v] + 1;
                    q.push(nv);
                }
            }
        }

        int res = Q[u];
        for (int j = 0; j < N; j++)
        {
            if (D[j] != -1)
            {
                res = max(res, Q[u] + DP[j] - ECST * D[j]);
            }
        }
        DP[u] = res;
        result = max(result, res);
    }

    cout << result << endl;
    return 0;
}