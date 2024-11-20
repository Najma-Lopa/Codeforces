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
    int x,y,z;
    cin>>x>>y>>z;
    int a,b,c;
    cin>>a>>b>>c;
    if(x<=a&&y<=(a-x)+b&&z<=(a-x+b)-y+c)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}