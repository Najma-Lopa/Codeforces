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
    ll t,a,k;
    cin>>t>>a>>k;
    if(t>=k)
    {
        t=t-k;
        a=a;
    }
    else if(k>t)
    {
        k=k-t;
        t=0;
        if(k>=a)
        {
            a=0;
        }
        else
        {
            a=a-k;
        }
    }
    cout<<t<<" "<<a<<endl;
}