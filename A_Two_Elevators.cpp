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
       ll a,b,c;
        cin>>a>>b>>c;
        ll d,e,f;
        e=a-1;
        if(c>b)
        {
         d=(c-b);
         f=d+(c-1);
        }
        else
        {
            d=b-c;
            f=d+(c-1);
        }
         if(e<f)
         cout<<"1"<<endl;
         else if(e==f)
         cout<<"3"<<endl;
         else
         cout<<"2"<<endl;
    }
}