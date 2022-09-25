#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

signed main()
{
    optimize();

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k % 2 == 0 && k % 4 == 0)
        {
            cout << "NO" << endl;
        }
        else if (k & 1)
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i += 2)
            {
                cout << i << " " << i + 1 << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i += 2)
            {
                if (i % 4 == 0)
                {
                    cout << i - 1 << " " << i << endl;
                }
                else
                {
                    cout << i << " " << i - 1 << endl;
                }
            }
        }
    }
    return 0;
}
