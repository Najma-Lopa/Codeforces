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
    map<string,bool>m;
    while(t--)
    {
        string s;
        cin>>s;
        if(m[s]==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        m[s]=1;
    }
}