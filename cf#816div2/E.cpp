#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl '\n';
using ll = long long;
using namespace std;

int main()
{
    optimize();
  int t;
  cin>>t;
  while (t--)
  {
    int n,m;
    cin>>n>>m;
    if(m==1 && n==1){
        cout<<0<<endl;
        continue;
    }
    if(m>n){
        cout<<((n-1)+n+(m-1))<<endl;
    }
    else
    {
        cout<<((m-1)+m+(n-1))<<endl;
    }

  }
  

    return 0;
}