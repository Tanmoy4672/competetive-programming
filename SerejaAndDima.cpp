#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // 4

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        /* input element */
        cin >> v[i]; // 4 1 2 10
    }

    int s = 0, d = 0, f1 = 1;
    while (!v.empty())
    {
        if (f1 == 1)
        {
            if (v[0] > v.back())
            {
                s += v[0];
                v.erase(v.begin());
            }
            else
            {
                s += v.back();
                v.pop_back();
            }
            f1 = 0;
        }
        else
        {
           if (v[0] > v.back())
            {
                d += v[0];
                v.erase(v.begin());
            }
            else
            {
                d += v.back();
                v.pop_back();
            }
            f1 = 1;
        }
    }

    cout << s << " ";
    cout << d << endl;

    return 0;
}