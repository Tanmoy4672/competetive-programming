#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using ll = long long;
using namespace std;

int main()
{
    optimize();
    string n;
    cin >> n;
    int cntL = 0;
    int cntU = 0;
    for (int i = 0; i < n.size(); i++)
    {
        if (islower(n[i]))
        {
            cntL++;
        }
        else
        {
            cntU++;
        }
    }
    
    if (cntL > cntU)
    {
        for (int i = 0; i < n.size(); i++)
        {
            transform(n.begin(), n.end(), n.begin(), ::tolower);
        }
    }
    else if (cntL < cntU)
    {
        transform(n.begin(), n.end(), n.begin(), ::toupper);
    }
    else
    {
        transform(n.begin(), n.end(), n.begin(), ::tolower);
    }
    cout << n << endl;

    return 0;
}