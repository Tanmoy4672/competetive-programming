#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

int main()
{
    optimize();

    int t;
    long long n, m;

    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        if ((n % 2 == 0 && m % 2 == 0) || (n % 2 != 0 && m % 2 != 0))
        {
            cout << "Tonya" << endl;
        }
        else
        {
            cout<<"Burenka"<<endl;
        }
    }

    return 0;
}