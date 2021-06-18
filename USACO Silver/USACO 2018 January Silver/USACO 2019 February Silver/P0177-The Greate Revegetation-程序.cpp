#include <bits/stdc++.h>
using namespace std;

template <class T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define F0R1(i, a) for (int i = 1; i <= (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define F0Rd1(i, a) for (int i = a; i > 0; i--)
#define SORT(vec) sort(vec.begin(), vec.end())
#define MIN(a, b) a = min(a, b)
#define MAX(a, b) a = max(a, b)

#define INF 1000000010
#define LL_INF 4500000000000000000
#define LSOne(S) (S & (-S))
#define EPS 1e-9
#define pA first
#define pB second
#define mp make_pair
#define pb push_back
#define PI acos(-1.0)
#define ll long long
#define MOD (int)(2e+9 + 11)
#define SET(vec, val, size)        \
    for (int i = 0; i < size; i++) \
        vec[i] = val;
#define SET2D(arr, val, dim1, dim2) \
    F0R(i, dim1)                    \
    F0R(j, dim2)                    \
    arr[i][j] = val;
#define SET3D(arr, val, dim1, dim2, dim3) \
    F0R(i, dim1)                          \
    F0R(j, dim2)                          \
    F0R(k, dim3) arr[i][j][k] = val;
#define SET4D(arr, val, dim1, dim2, dim3, dim4) \
    F0R(i, dim1)                                \
    F0R(j, dim2)                                \
    F0R(k, dim3) F0R(l, dim4) arr[i][j][k][l] = val;
#define READGRID(arr, dim) \
    F0R(i, dim)            \
    F0R(j, dim)            \
        cin >> arr[i][j];
#define all(x) (x).begin(), (x).end()

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<ll> vl;

vi s_children[100001], d_children[100001];
int id[100001];

void bad()
{
    cout << 0 << endl;
    exit(0);
}

void dfs(int u, int val)
{
    id[u] = val;
    for (int v : s_children[u])
    {
        if (id[v] == val)
            continue;
        if (id[v] != -1)
            bad();
        dfs(v, val);
    }
    for (int v : d_children[u])
    {
        if (id[v] == !val)
            continue;
        if (id[v] != -1)
            bad();
        dfs(v, !val);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    F0R(i, m)
    {
        char c;
        int a, b;
        cin >> c >> a >> b;
        if (c == 'S')
        {
            s_children[a].pb(b);
            s_children[b].pb(a);
        }
        else
        {
            d_children[a].pb(b);
            d_children[b].pb(a);
        }
    }

    int ct = 0;
    SET(id, -1, 100001);
    F0R1(i, n)
    {
        if (id[i] == -1)
        {
            dfs(i, ct++ % 2);
        }
    }
    cout << 1;
    F0R(i, ct)
    {
        cout << 0;
    }
    cout << endl;
    return 0;
}