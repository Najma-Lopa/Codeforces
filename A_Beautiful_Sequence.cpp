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
        int flag=0;
        for(ll i=1;i<=n;i++)
        {
            if(arr[i-1]==i)
            {
            flag=1;
            break;
            }
            else
            {
                //sort(arr,arr+n);
                for(ll j=n-1;j>=i-1;j--)
                {
                    if(arr[j]==i)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}