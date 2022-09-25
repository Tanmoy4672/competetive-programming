#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n';
using namespace std;
int main()
{
    optimize();

    int t;
    cin >> t;
    map<string, int> m;
    int cnt = 1;
    while (t--)
    {
        string s;
        cin >> s;
        if (m[s] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << m[s] << endl;
        }
        m[s]++;
    }

    return 0;
}
