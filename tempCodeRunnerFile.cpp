#include<iostream>
using namespace std;

int main()
{
    long long int n,m,a,res;

    cin>>n>>m>>a;

    if(n%a ==0 && m%a==0)
    {
       res=(n/m) * (m/a);
    }
    else
    {
       res=(n/m +1) * (m/a +1);
    }
    cout<<res<<endl;

    return 0;
}