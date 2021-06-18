#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int hi = n, lo = 1;
    int sol = n;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        int time = 0, j = 0;
        priority_queue<int> pq;
        int size = 0;
        while (size < mid && j < n)
        {
            pq.push(-ar[j]);
            size++;
            j++;
        }

        while ((int)pq.size())
        {
            time += max(0, -pq.top() - time);
            pq.pop();
            if (j < n)
            {
                pq.push(-(ar[j] + time));
                j++;
            }
        }

        if (time > t)
        {
            lo = mid + 1;
        }
        else
        {
            sol = min(sol, mid);
            hi = mid - 1;
        }
    }
    cout << sol << '\n';
}
