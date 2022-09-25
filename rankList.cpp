#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

bool cmp(const pair<int, int> &r1, const pair<int, int> &r2)
{
    if (r1.first > r2.first)
        return 1;
    else if (r1.first == r2.first)
        return (r1.second < r2.second);
    return 0;
}
int main()
{
    optimize();
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);

    int ans = 0;
    for (auto u : v)
    {
        if (u == v[k - 1])
            ans++;
    }
    cout << ans << endl;

    return 0;
}