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

void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arrr[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<m;i++)
    {
        cin>>arrr[i];
    }
    sort(arrr,arrr+m);
    if(arr[0]==arrr[0])
    cout<<arr[0]<<endl;
    else
    {   for(int i=0;i<n;i++)
        {
        if(binary_search(arrr,arrr+m,arr[i]))
            {
                cout<<arr[i]<<endl;
                return;
            }
        }
        ll mn=min(arr[0],arrr[0]);
        if(mn==arr[0])
        {
            
            cout<<arr[0]<<arrr[0]<<endl;
        }
        else
        {
            
            cout<<arrr[0]<<arr[0]<<endl;
        }
    }
}

int main()
{
    optimize();

    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }

    return 0;
}