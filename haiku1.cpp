#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main()
{
    optimize();
    vector<string> v;
    int cnt[] = {5, 7, 5};

    for (int i = 0; i < 3; i++)
    {
        /* code */
        string s;
        char c;
        cin >> c;
        getline(cin, s);
        s = c + s;

        v.push_back(s);
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        int c = 0;
        for (auto u : v[i])
        {
            if (isVowel(u))
                c++;
        }
        if (c != cnt[i])
        {
            return cout << "NO\n",0;
        }
    }
    cout << "YES" << endl;

    return 0;
}