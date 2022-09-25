#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n';
using namespace std;
int main()
{
    optimize();

    int n, m;
    cin >> n >> m;
    map<string, string> c;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        c[ip] = name;
    }

    while (m--)
    {
        string s,ip;
        cin>>s>>ip;
        ip.pop_back();

        cout<<s<<" "<<ip<<"; #"<<c[ip]<<endl; //here c[ip]= frequency
    }

    return 0;
}
