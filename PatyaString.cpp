#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    for (int i = 0; i < a.length(); i++)
    {
        a[i] = tolower(a[i]);
    }
    cout << endl;
    for (int i = 0; i < b.length(); i++)
    {
        b[i] = tolower(b[i]);
    }
    if (a.length() == b.length())
    {
        // If the first string is less than the second one, print "-1"
        if (b>a)
            cout << "-1";
        else if (b<a)
        {
            // the second string is less than the first one, print "1"
            cout << "1";
        }
        else
            cout << "0";
    }

    return 0;
}