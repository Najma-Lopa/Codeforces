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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp,m;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                mp[s[i]]++;
            }
            else
            {
                m[s[i]]++;
            }
        }
        int maxx=0;
        char ch;
        ll mpcnt=0;
        for(auto u:mp)
        {
            mpcnt+=u.second;
            if(u.second>maxx)
            {
                maxx=u.second;
                ch=u.first;
            }
            //cout<<u.first<<" "<<u.second<<endl;
        }
       // cout<<ch<<" "<<maxx<<endl;
        int maxxx=0;
        char chh;
        ll mcnt=0;
        int x;
        for(auto u:m)
        {
            mcnt+=u.second;
            if(u.second>maxxx)
            {
                maxxx=u.second;
                chh=u.first;
            }
            //cout<<u.first<<" "<<u.second<<endl;
        }
       // cout<<mpcnt<<" "<<mcnt<<endl;
        ll cnt=1;
        if(n%2==0)
        {
            cnt=((n/2)-maxx)+((n/2)-maxxx);
        
        cout<<cnt-1<<endl;
        }
        else
        {
            cnt=0
            cnt=((mpcnt-maxx)+(mcnt-maxxx));
        cout<<cnt<<endl;
        }

    }
}