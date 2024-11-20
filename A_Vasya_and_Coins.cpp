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
        ll a,b;
        cin>>a>>b;
        int ans;
        if(a==0)
        cout<<"1"<<endl;
        else if(a>0&&b==0)
        {
            cout<<a+1<<endl;
        }
        else
        {
            ans=(a+2*b)+1;
            cout<<ans<<endl;
        }
    }
}