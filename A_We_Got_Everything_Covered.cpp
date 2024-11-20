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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        char ch='a';
        cin>>n>>k;
        string s;
        for(int i=0;i<k;i++)
        {
            s+=ch;
            ch++;
        }
        for(int j=0;j<n;j++)
        {
            cout<<s;
        }
        cout<<endl;
    }
}