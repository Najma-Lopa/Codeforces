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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b<a)
        {
            swap(a,b);
        }
        if(a<d && b>d && (c>b || c<a))
        {
            cout<<"YES"<<endl;
        }
        else if(a<c && b>c && (d>b || d<a))
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}