//* Bismillahir Rahmanir Rahim *\

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define mem(arr, k) memset(arr, k, sizeof(arr))
#define MOD 1000000007
#define sqr(a) ((a) * (a))
#define endl "\n"
typedef long long ll;
typedef double dd;
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int N = 2e5 + 123;
ll prfSum[N];

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

const ll mx = 1e7;
bitset<mx> isPrime;
vector<ll> primes;
ll cntPrime[mx];

void solve(ll lim)
{
    for (int i = 3; i <= lim; i += 2)
    {
        isPrime[i] = 1;
    }
    ll sq = sqrt(lim);
    for (int i = 3; i <= sq; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= lim; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<=lim;i+=2)
    {
        if(isPrime[i]==1)
        {
        primes.push_back(i);
        }
    }
}

int main()
{
    optimize();

    int lim=1e7+123;
        solve(lim);
        int limX=3200;
        int limy=60;
        for(int x=1;x<limX;x++)
        {
            for(int y=1;y<limy;y++)
            {
                int val=(x*x)+ (y*y*y*y);
                if(val<=lim && isPrime[val])
                {
                    cntPrime[val]=1;
                }
            }
        }

        for(int i=1;i<=lim;i++)
        {
            cntPrime[i]+=cntPrime[i-1];
        }

        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            cout<<cntPrime[n]<<endl;
        }


    return 0;
}