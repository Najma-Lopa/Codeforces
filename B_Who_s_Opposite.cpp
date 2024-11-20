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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll d=abs(a-b)*2;
        ll maxx=max(max(a,b),c);
        if(maxx>d)
        cout<<"-1"<<endl;
        else
        {
            if(c<=d/2)
            cout<<c+d/2<<endl;
            else
            cout<<c-d/2<<endl;
        }
    }
}