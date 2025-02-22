//* Bismillahir Rahmanir Rahim *\

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define MOD 1000000007
#define endl "\n"
typedef long long ll;
const int N = 2e5 + 123;

void solve()
{
    ll n, q;
    cin >> n >> q;
    multiset<ll> ms;
    vector<ll> arr(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ms.insert(arr[i]);
    }

    while (q--)
    {
        char ch;
        cin >> ch;
        ll b, c;
        cin >> b >> c;

        if (ch == '?')
        {
            auto lw = ms.lower_bound(b);
            auto hi = ms.upper_bound(c);
            cout << distance(lw, hi) << endl;
        }
        else if (ch == '!')
        {
           
            b--; 
            ms.erase(ms.find(arr[b])); 
            arr[b] = c; 
            ms.insert(c);
        }
    }
}

int main()
{
    optimize();
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
