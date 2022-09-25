#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using ll = long long;
using namespace std;

int main()
{
    optimize();

    int t;
    long long a[4];
    float f;
    float f2;
    cin >> t;

    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll temp1 = a * d;
        ll temp2 = b * c;
        if (temp1 == temp2)
        {
            cout << 0 << endl;
        }
        else if (temp1 == 0 || temp2 == 0)
        {
            cout << 1 << endl;
        }
        else if (temp1 % temp2 == 0 || temp2 % temp1 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}