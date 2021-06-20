#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int Start[26], End[26];
    fill(Start, Start + 26, -1);
    fill(End, End + 26, -1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (Start[s[i] - 'A'] == -1)
            Start[s[i] - 'A'] = i;
        else
            End[s[i] - 'A'] = i;
    }
    int ans = 0;
    for (int i = 0; i < 26; ++i)
        for (int j = 0; j < 26; ++j)
            ans += Start[i] < Start[j] && Start[j] < End[i] && End[i] < End[j];
    cout << ans;
    return 0;
}