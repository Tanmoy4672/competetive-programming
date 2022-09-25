//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string maximumFrequency(string s);

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {

        string s;
        getline(cin, s);

        cout << maximumFrequency(s) << endl;
        // maximumFrequency(s);
    }
    return 0;
}

// } Driver Code Ends
// void
string maximumFrequency(string s)
{
    // Complete the function

    vector<string> v;
    string tmp;
    for (int i = 0; i < s.size(); i++)
    {
        if (isspace(s[i])) // the devil in the sky
        {
            v.push_back(tmp);
            tmp.clear();
        }
        else
        {
            tmp += s[i];
        }
    }
    v.push_back(tmp);
    int mxFrq = 0;
    map<string, int> cnt;
    for (auto u : v)
    {
        cnt[u]++;
        mxFrq = max(mxFrq, cnt[u]);
    }

    string ans;
    for (auto u : v)
    {
        if (cnt[u] == mxFrq)
        {
            ans = u;
         //   return to_string(mxFrq);
            break;
        }
       // return to_string(mxFrq);
    }
    string sAns= ans+" "+to_string(mxFrq);
   


    return sAns;
    // cout << ans << " " << mxFrq << endl;
}