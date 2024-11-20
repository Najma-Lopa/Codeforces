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
    ll d1,d2,h;
    cin>>d1>>d2>>h;
    int d=2*d1+2*d2;
    int x=2*d1+2*h;
    int y=2*d2+2*h;
    int z=d1+d2+h;
    int minn=min(min(min(d,x),y),z);
    cout<<minn<<endl;
    
}