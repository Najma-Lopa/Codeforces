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
    int a,b,c;
    cin>>a>>b>>c;
    int ans=(a/c);
    if(ans>=b)
    cout<<"Iron fist Ketil"<<endl;
    else
    cout<<"King Canute"<<endl;
}