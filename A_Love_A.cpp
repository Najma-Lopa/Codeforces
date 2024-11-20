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
    string s;
    cin>>s;
    int l=s.size();
    int d=l/2;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        cnt++;
    }
    if((cnt*2-1)>=l)
    cout<<l<<endl;
    // else if(cnt==d)
    // {
    //     cout<<l-1<<endl;
    // }
    else
    cout<<cnt*2-1<<endl;
}