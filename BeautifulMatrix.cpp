#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, a,res;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            // cout<<"0";
            cin >> a;
            if (a == 1)
            {
                res = abs(i-3) +abs(j-3);
            }
        }
        cout << endl;
    }
    cout<<res;

    return 0;
}