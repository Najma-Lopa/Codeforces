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
        int n,k;
        cin>>n>>k;
        int ans=n-k;
        for(int i=ans;i>=1;i--)
        {
            cout<<i<<" ";
        }
        for(int i=ans+1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}