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
        int a,b;
        int p;
        cin>>a>>b;
        if(a<b)
        {p=b;
        b=a;
        a=p;}
        if(a<=2*b)
        cout<<2*b*2*b<<endl;
        if(a>2*b)
        cout<<a*a<<endl;
    }
}
