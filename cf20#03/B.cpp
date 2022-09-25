///*** |||                       Believe in God                       |||  ***///
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'
#define sz(x) ((int) (x).size())
#define optimize() ios_base::sync_with_stdio(0);// cin.tie(0), cout.tie(0);

double pi = 3.1415926535;
int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};
int di[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dj[] = {1, -1, 0, 0, 1, -1, 1, -1};


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
    string ss;
    cin >> t>>ss;

string s;
int sz = t;
int l =0;
int r =0;

int m = sz/2;
    while (t)
    {
       if(t%2 !=0){
        s += ss[m + r];
        r +=1;
       }
       else
       {
        s += ss[m-1 -l];
        l +=1;
       }
       t -= 1;
    }
    cout<<s<<endl;

    return 0;
}



