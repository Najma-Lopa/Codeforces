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
        ll sum=0;
        ll cnt1=0,cnt2=0;
        for(ll i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(arr[i]%2==0)
            cnt1++;
            else
            cnt2++;
        }
        if(sum%2!=0)
        cout<<"YES"<<endl;
        else
        {
            if(cnt1>0&&cnt2>0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}