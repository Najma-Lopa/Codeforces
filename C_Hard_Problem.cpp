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
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        ll ans=min(a,m);
        ll ans2=min(b,m);
        ll total=m+m;
        ll q=ans+ans2;
        ll s=total-q;
        ll res=0;
       if(s<c)
       {
         res=s;
       }
       else
       {
        res=c;
       }
       ll nm=q+res;
       cout<<nm<<endl;

    }
}