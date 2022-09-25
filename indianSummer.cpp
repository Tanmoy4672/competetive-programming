#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using namespace std;

int main()
{
    optimize();
    int n;
    cin >> n;

    vector < pair<string, string>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int s = unique(v.begin(),v.end())- v.begin();

    cout<<s<<endl;

    return 0;
}