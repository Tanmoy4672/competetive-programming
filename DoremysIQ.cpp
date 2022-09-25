#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, q, i, j, q1;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>q;
        
        ll a[n], b[n];
        
        q1=0;
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for(i=n-1; i>=0; i--)
        {
            if(q1>=a[i]){
                b[i]=1;
            }else{
                if(q1<q){
                    q1++;
                    b[i]=1;
                }else{
                    b[i]=0;
                }
            }
        }
        
        for(i=0; i<n; i++){
            cout<<b[i]<<"";
        }
        
        cout<<"\n";
        
        
    }
}