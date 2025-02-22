//* بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define fl float
const int mx = 2e5 + 122;
int arr[mx];
ll sum[mx];
int main()
{
    optimize();
    int n, s;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
    }
    ll ans = 0;
    map<ll, int> mp;
    mp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        ll res = sum[i] - s;
        //cout<<res<<" ";
        ans += mp[res]; 
        //cout<<ans<<" " ;
        mp[sum[i]]++;
    }
    // for(auto u:mp)
    // {
    //     cout<<u.first<<" "<<u.second<<" ";//
    //     cout<<endl;
    // }
    //cout<<endl;
    cout << ans << endl;
}
