///*** |||                       Believe in God                       |||  ***///
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef unordered_map<ll, ll> uv;
typedef set<ll> st;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(), (a)end()
#define rall(a) (a).rbegin(), (a).end()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int MXN = 1e6 + 100;
const int inf = 0x3F3F3F3F;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define US(a)                  \
    for (int i = 0; a[i]; i++) \
    a[i] &= ~32
#define DS(a)                  \
    for (int i = 0; a[i]; i++) \
    a[i] |= 32

#define mem(a, b) memset(a, b), sizeof(a)
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu()
{
    cerr << endl;
}

#define error(args...)                           \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
void err(istream_iterator<string> it)
{
}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}

template <typename T>
T power(T n, T p)
{
    T res = 1;
    while (p > 0)
    {
        if (p & 1)
            res *= n;
        n *= n;
        p >>= 1;
    }
    return res;
}
template <typename T>
T bigmod(T n, T p, T m)
{
    n %= m;
    T res = 1;
    while (p > 0)
    {
        if (p & 1)
            res = res * n % m;
        n = n * n % m;
        p >>= 1;
    }
    return res;
}

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};
int hr[] = {1, 1, 2, 2, -1, -1, -2, -2};
int hc[] = {2, -2, 1, -1, 2, -2, 1, -1};
int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};

int main()
{
    optimize();
    ll n, a;
    ll tmp;
    min = inf;
    max = -inf;

    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> tmp;
        min(min, tmp);
        max(max, tmp);
    }
    ll a = max - min + 1;;
    cout << a - n << endl;

    return 0;
}
