#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1 2 3
    string s;
    cin >> s;
    int i,j;
    for (i = 0; i < s.size(); i+=2)
    {
        /* code */
        for (j = 0; j < s.size() - 1; j+=2)
        {
            /* code */
            if (s[j] > s[j + 2])
            {
                swap(s[j], s[j + 2]);
            }
        }
    }
    cout<<s;
    cout<<endl;
}