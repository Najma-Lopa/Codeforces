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
        int m,n;
        cin>>m>>n;
        string s1,s2;
        cin>>s1>>s2;
        reverse(s2.begin(),s2.end());
        s1=s1+s2;
        int cnt=0;
        for(int i=0;i<m+n-1;i++)
        {
            if(s1[i]==s1[i+1])
            cnt++;
        }
        if(cnt>1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}