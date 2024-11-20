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
        ll arr[n+5];
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n==1){
                if(arr[n]>1)
            cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;}
        else
        {
            ll flag=0;
            sort(arr,arr+n);
            ll d;
            for(ll i=0; i<n; i++)
            {
                if(arr[n-1]-arr[n-2]==0|| arr[n-1]-arr[n-2]==1)
                    flag=1;
            }

        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
}
