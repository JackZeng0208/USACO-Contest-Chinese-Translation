#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<string, int> city_state;
    long long total = 0;
    for (int i = 0; i < N; i++)
    {
        string city;
        string state;
        cin >> city >> state;
        city = city.substr(0, 2);
        if (city != state)
        {
            total += city_state[state + city];
        }
        city_state[city + state]++;
    }
    cout << total << endl;
}
