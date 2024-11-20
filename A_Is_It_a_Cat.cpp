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
        string s;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::toupper);
        int sz=unique(s.begin(),s.end())-s.begin();
        int flag=0;
        for(int i=0;i<sz;i++)
        {
            if(sz==4&&s[0]=='M'&&s[1]=='E'&&s[2]=='O'&&s[3]=='W')
            flag=1;
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
}