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
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c&&b==d)
        cout<<a<<" "<<b<<endl;
        else if(a!=c)
        cout<<a<<" "<<c<<endl;
        else if(a!=d)
        cout<<a<<" "<<d<<endl;
    }
}