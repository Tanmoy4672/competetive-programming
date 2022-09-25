#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

int main()
{
    optimize();

    int k, n, w, c = 1, sum = 0, s = 0;
    cin >> k >> n >> w;

    while (w--)
    {
        s = c * k;
        sum += s;
        c++;
    }
    if (n < sum)
    {
        sum = sum - n;
        cout << sum << endl;
    }
    else
        cout << "0" << endl;

    return 0;
}