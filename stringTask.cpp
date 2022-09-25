#include <bits/stdc++.h>
#define endl '\n'
#define optimize() ios_base ::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    optimize();

    string s, s2;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] == 'y' || s[i] == 'Y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            continue;
        }
        else
        {
            s2 += ".";
            s2 += tolower(s[i]);
        }
    }
    cout << s2 << endl;

    return 0;
}