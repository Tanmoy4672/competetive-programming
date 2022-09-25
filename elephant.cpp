#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using ll = long long;
using namespace std;

int main()
{
    optimize();
    int n;
    cin >> n;
    if(n%5==0)
    {
        cout<<n/5<<endl;
    }
    else
    cout<<n/5+1<<endl;

   
    return 0;
}