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
        ll l,r;
        cin>>l>>r;
        // ll arr[r+5];
        // for(int i=l;l<=r;i++)
        // {
        //     arr[i]=i;
        // }
        ll cnt=1;
        ll ans=0;
        while(cnt*(cnt-1)/2<=(r-l))
        {
            cnt++;
        }
        cout<<cnt-1<<endl;
    }
}
