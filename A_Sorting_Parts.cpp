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
        ll temp[n];
        for(ll i=0;i<n;i++)
        {
            temp[i]=arr[i];
        }
        sort(temp,temp+n);
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(temp[i]==arr[i])
            {
                cnt++;
            }
        }
        if(cnt==n)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
}