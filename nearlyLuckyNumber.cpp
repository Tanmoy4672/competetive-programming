#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    int cnt = 0;
    int c;
    while (n > 0)
    {
        int ans = n % 10;
        if (ans == 4 || ans == 7)
        {
            cnt++;
        }
        n = n / 10;
    }
    if (cnt == 4 || cnt == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}