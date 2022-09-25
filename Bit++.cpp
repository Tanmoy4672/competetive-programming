#include <bits/stdc++.h>
using namespace std;
int main()
{
    // one variable = x
    int n, res = 0;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == "++X" || a == "X++")
        {
            res += 1;
        }
        if (a == "--X" || a == "X--")
        {
            res -= 1;
        }
    }

    cout << res << endl;
    return 0;
}