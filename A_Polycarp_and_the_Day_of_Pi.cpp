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
        string st="314159265358979323846264338327";
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==st[i])
            ans++;
            else
                break;
        }
        cout<<ans<<endl;
    }
}