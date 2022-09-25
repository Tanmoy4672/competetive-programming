#include <iostream>
#include <math.h>
#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
    optimize();


    long long int t,i,j,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        long long int arr[n],b[n];

        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            b[i]=arr[i];

        }

        sort(arr,arr+n);

        long long int m = arr[n-1];


        //cout<<m<<endl;

        for(i=0; i<n; i++)
        {
            if(b[i]==m)
            {
                cout<<i+1<<endl;
                break;
            }
        }


    }


    return 0;
}


