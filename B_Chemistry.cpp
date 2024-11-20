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
        map<char,int>m;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int cnt=0;
        for(auto u:m)
        {
            if(u.second%2!=0)
            {
            cnt++;
            }
        }
        if((cnt-1)<0)
        cnt=0;
        else
        cnt=cnt-1;
        if(k>=cnt && k<=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}