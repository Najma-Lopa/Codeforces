// بِسْمِ ٱللَّهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll maxx=0;
    for(int i=0;i<n;i++)
    {
    maxx=max(maxx,arr[i]);
    }
    ll d=max(arr[0],arr[n-1]);
    int ans=(maxx-1)/d;
    // int anss=maxx/arr[n-1];
    // int r=min(ans,anss);
    cout<<ans<<endl;
}