#include <bits/stdc++.h>
#define all(S) S.begin(), S.end()
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
#define ll long long
using namespace std;

ll lastDigitofNumber(ll num);
int main()
{
    ll n;
    int k;
    cin >> n >> k;

    while (k--)
    {
        int temp = n;
        // if(sizeof(n) - 1)
        if (lastDigitofNumber(n) != 0)
        {
            n -= 1;
        }
        else
        {
            n /= 10;
        }
    }
    cout << n << endl;

    return 0;
}
ll lastDigitofNumber(ll num)
{
    return num % 10;
}