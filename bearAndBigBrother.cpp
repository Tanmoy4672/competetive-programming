#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

int main()
{
    optimize();

    int a, b,cnt=0;
    cin >> a >> b;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}