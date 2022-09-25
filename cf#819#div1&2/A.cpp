///*** |||                       Believe in God                       |||  ***///
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'

#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int m = INT_MIN,mini=INT_MAX;
        for(int i= 0; i<n; i++)
        {
            cin>>a[i];
            if(i!=0)
            {
                if(m<a[i])
                {
                    m = a[i];
                }
            }
            if(i!=n-1)
            {
                if(mini>a[i])
                {
                    mini = a[i];
                }
            }
            if(n==1)
            {
                cout<<"0"<<endl;
            }
        }

        int ans = max(m-a[0],a[n-1] -mini);
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans,a[i]-a[i+1]);
        }
        cout<<ans<<endl;
    }

    return 0;
}



