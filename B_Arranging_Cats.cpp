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
        int n;
        cin>>n;
        string s,st;
        cin>>s>>st;
        int cnt=0,cntt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0' &&st[i]=='1')
            cnt++;
            else if(s[i]=='1'&&st[i]=='0')
            cntt++;
        }
        int ans=max(cnt,cntt);
        cout<<ans<<endl;
    }
}