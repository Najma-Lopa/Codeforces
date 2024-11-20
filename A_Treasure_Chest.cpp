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
        int a,b,c;
        cin>>a>>b>>c;
        int s=(a+c);
        if(a>b)
        cout<<a<<endl;
        else if(s>=b)
        cout<<b<<endl;
        else
        {
            int p=(b-(a+c));
        int ans=p+b;
        cout<<ans<<endl;
        }
    }
}