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
        int b,c,d;
        cin>>b>>c>>d;
        if(b==c+d||b<(c+d))
        cout<<b+(b-1)<<endl;
        else
        cout<<((c+d)*2)+1<<endl;
    }
}