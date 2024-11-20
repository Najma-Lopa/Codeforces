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
        ll array[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        sort(array, array+n);
        int minn=0;
        minn=min(arr[0],array[0]);
        //cout<<minn<<endl;
        ll sum=0;
        ll ans=0,anss=0;
            for(int i=0;i<n;i++)
            {
                ans+=array[i]+arr[0];
            }
            for(int i=0;i<n;i++)
            {
                anss+=arr[i]+array[0];
            }
            sum=min(ans,anss);  
        cout<<sum<<endl;
    }
}