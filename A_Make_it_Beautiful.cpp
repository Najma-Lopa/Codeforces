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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int temp[n];
    for (int i = 1; i <= n; i++)
    {
        temp[i] = arr[i];
    }
    ll psum[n] = {0};
    for (int i = 1; i <= n; i++)
    {
        psum[i] = psum[i - 1] + arr[i];
    }
    // for (int i=1;i<=n;i++)

    // {
    //     cout << psum[i] << " ";
    // }
    int flag=0;
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]==psum[i-1])
        {
            flag=1;
            break;
        }
    }
    sort(temp+1,temp+n+1);
    if(temp[1]==temp[n])
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(flag==1)
        {
            cout<<"YES"<<endl;
            swap(arr[1],arr[n]);
            for(int i=1;i<=n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}