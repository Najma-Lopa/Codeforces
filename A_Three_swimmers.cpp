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
        ll d,a,b,c;
        cin>>d>>a>>b>>c;
        if(d%a==0||d%b==0||d%c==0)
        {
            cout<<"0"<<endl;
        }
        else{
        ll p,q,r;
        p=d/a;
        q=d/b;
        r=d/c;
        p=p*a+a-d;
        q=q*b+b-d;
        r=r*c+c-d;
        ll rsl=min(p,q);
        cout<<min(rsl,r)<<endl;}
    }
}