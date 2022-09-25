#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using ll = long long;
using namespace std;

int main()
{
    optimize();
    int n;
    cin >> n;

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        m[c]++;
    }

    int cnt = 0;
    for (auto u : m)
    {
        if (u.second >= u.first)
        {
            cnt += (u.second - u.first);
        }
        else
        {
            cnt += u.second;
        }
    }
    cout << cnt << endl;
    return 0;
}