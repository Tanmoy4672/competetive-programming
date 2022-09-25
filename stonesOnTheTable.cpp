#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

int main()
{
    optimize();

    int n, R = 0, G = 0, B = 0, cnt = 0;
    cin >> n;
    vector<char> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < c.size(); i++)
    {
        /* code */
        if (c[i] == c[i + 1])
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}