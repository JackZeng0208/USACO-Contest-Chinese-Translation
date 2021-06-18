#include <bits/stdc++.h>
using namespace std;

bool isConnected[200][200];
vector<bool> visited;
int n;

int dfs(int v)
{
    visited[v] = true;
    int cows = 0;

    for (int j = 0; j < n; j++)
    {
        if (visited[j] || !isConnected[v][j])
            continue;
        visited[j] = true;
        cows += dfs(j) + 1;
    }
    return cows;
}

int main()
{
    cin >> n;
    vector<int> x(n), y(n), p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sumDist = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            int hip = p[i] * p[i];
            if (sumDist <= hip)
                isConnected[i][j] = true;
        }
    }

    int sol = 0;

    for (int i = 0; i < n; i++)
    {
        visited.assign(n, false);
        int cowHear = dfs(i) + 1;
        sol = max(sol, cowHear);
    }
    cout << sol << '\n';
}