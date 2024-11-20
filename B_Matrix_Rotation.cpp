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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<b&&c<d&&a<c&&b<d)
        cout<<"YES"<<endl;
        else if(a<b&&b>d&&d>c&&a>c)
        cout<<"YES"<<endl;
        else if(a>b&&a<c&&c>d&&b<d)
        cout<<"YES"<<endl;
        else if(a>b&&b>d&&d<c&&a>c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}