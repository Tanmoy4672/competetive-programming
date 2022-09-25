#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n';
typedef pair<int, int> pii;
int main()
{
    optimize();
    int tt;
    cin >> tt;
    for (int t = 1; t <= tt; t++)
    {

        int n, r;
        cin >> n >> r;

        map<pii, bool> c;
        bool bo = 1;
        while (r--)
        {
            int a, b;
            cin >> a >> b;
            if (c[{a, b}])
            {
                bo = 0;
            }
            c[{a, b}] = 1;
        }

        if (bo)
        {
            cout << "Scenario "
                 << "#" << t << ": "
                 << "possible" << endl;
        }

        else
        {
            cout << "Scenario "
                 << "#" << t <<
                ": impossible" << endl;
        }
    }

    return 0;
}
