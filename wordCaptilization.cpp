#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

int main()
{
    optimize();
    string s;
    cin >> s;

    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;

    cout << s << endl;

    return 0;
}