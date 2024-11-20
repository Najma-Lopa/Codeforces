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
        if(a==1&&b==1)
        {
            cout<<"No"<<endl;
        }
        else if(a>b)
        {
            if(a/2==b)
            cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
        }
        else
        {
            if(b/2==a)
            cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
        }

    }
}