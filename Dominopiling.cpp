#include <bits/stdc++.h>
using namespace std;
int main()
{

    // rectangular M * N
    // Domino = 2 * 1 or 1 * 2

    int m, n, res;
    cin >> m >> n;
    int ans = 2*1;
   res = (m*n)/ans;
   cout<<res<<endl;

    return 0;
}