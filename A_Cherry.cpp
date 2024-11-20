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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll maxx=arr[0]*arr[1];
        for(ll i=0;i<n-1;i++)
        {
            if(arr[i]*arr[i+1]>maxx)
            maxx=arr[i]*arr[i+1];
        }
        cout<<maxx<<endl;
    }
}