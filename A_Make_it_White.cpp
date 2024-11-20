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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int in,ind;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='B')
            {
                in=i;
                break;
            }
        }
        for(int i=s.length();i>=0;i--)
        {
            if(s[i]=='B')
            {
                ind=i;
                break;
            }
        }
        int ans=ind+1-in;
       // cout<<in<<" "<<ind<<endl;
       cout<<ans<<endl;
    }
}