#include <bits/stdc++.h>
#define all(S) S.begin(), S.end()
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
#define ll long long
using namespace std;

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<ll> v(n);
        if (s < k * b || s > n * (k - 1) + k * b)
        {
            cout << -1 << endl;
        }
        else
        {
            v[n - 1] = k * b;
            s -= k * b;
            for (int i = n - 1; i >= 0 && s > 0; i--)
            {
                v[i] += min(k - 1, s);
                s -= min(k - 1, s);
            }
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}