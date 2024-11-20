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
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
         for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        ll p=sqrt(sum);
        if((p*p)==sum)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}