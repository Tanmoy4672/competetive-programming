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

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(), (a)end()
#define rall(a) (a).rbegin(), (a).end()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
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

void faltu(/*args...*/)
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

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return a * (b / gcd(a, b));
}

int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};
int hr[] = {1, 1, 2, 2, -1, -1, -2, -2};
int hc[] = {2, -2, 1, -1, 2, -2, 1, -1};
int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};

const int mx = 5e3 + 123;
const int N = 3e5, M = N;
const int mod = 1'000'000'07;

int mpow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);

vi g[N];
int a[N];

void res()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << n * n << endl;
        return;
    }
    int k = n - 2;
    int ans = mpow(n, 2) - (mpow(2, k + 1) - 1) + 1;
    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    int count = 0;
    cin >> t;

    vector<pair<long long, long long>> vlong;
    while (t--)
    {
        res();
    }

    return 0;
}

int mpow(int base, int exp)
{
    base %= mod;
    int result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

void ipgraph(int n, int m)
{
    int i, u, v;
    while (m--)
    {
        cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
}

void dfs(int u, int par)
{
    for (int v : g[u])
    {
        if (v == par)
            continue;
        dfs(v, u);
    }
}
