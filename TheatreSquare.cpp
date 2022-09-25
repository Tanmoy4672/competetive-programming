#include<iostream>
using namespace std;

int main()
{
    long long int n,m,a,res,res2;

    cin>>n>>m>>a;

    if(n%a ==0)
    {
       res=(n/a);
    }
    else
    {
       res=n/a +1;
    }

    if (m%a==0)
    {
        res2 = res * (m/a);
    }
    else
    {
        res2 = res * (m/a +1);
    }
    
    cout<<res2<<endl;

    return 0;
}