///*** |||                       Believe in God                       |||  ***///
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'

#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void ans(){
int a,b,c;
cin>>a>>b>>c;
int temp =abs(b-c)+c;
if (a<temp)
{
    cout<<"1"<<endl;
}else if (a>temp)
{
    cout<<"2"<<endl;
}
else{
    cout<<"3"<<endl;
}

}
int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
       ans();
    }

    return 0;
}



