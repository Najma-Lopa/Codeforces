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
        int plus=0;
        int minus=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='+')
            {
                plus++;
            }
            else
            {
                minus++;
            }
        }
        int ans=abs(plus-minus);
        cout<<ans<<endl;
    }
}