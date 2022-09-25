#include<iostream>
using namespace std;

int main()
{
    int number, a, b, c, count = 0;
    cin>>number;
    for(int i = 0; i<number; i++)
    {
        cin>>a >>b >> c;
        if(a+b+c >=2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
