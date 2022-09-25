#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

int main()
{
    optimize();
    int t;
    cin >> t;

    string w;
    while (t--)
    {
        cin >> w;
        bool b = next_permutation(w.begin(), w.end());
        if (b == 0)
        {
            cout << "no answer" << endl;
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}