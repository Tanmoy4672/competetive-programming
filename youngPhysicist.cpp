#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

int main()
{
    optimize();

    int n;
    int xv = 0, yv = 0, zv = 0;
    cin >> n;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        xv += x, yv += y, zv += z;
    }

    if (xv == 0 && yv == 0 && zv == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}