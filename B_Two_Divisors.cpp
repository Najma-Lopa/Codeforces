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
        ll a,b;
        cin>>a>>b;
        ll ans=b*2;
        if(a==1)
        {
            cout<<b*b<<endl;
        }
        else
        {
            if(ans%a==0)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<a*b<<endl;
            }
        }
    }
}