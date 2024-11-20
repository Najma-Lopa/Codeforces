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
        int ans=n-1;
        for (int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                ans--;
            }
            else
            break;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='A')
            {
                ans--;
            }
            else
            break;
        }
        if(ans>=0)
        cout<<ans<<endl;
        else
        cout<<"0"<<endl;
    }
}