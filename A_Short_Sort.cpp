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
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
        if(s[0]=='a'&&s[1]=='b'&&s[2]=='c')
        flag=1;
        if(s[0]=='a'&&s[1]=='c'&&s[2]=='b')
        flag=1;
        if(s[0]=='b'&&s[1]=='a'&&s[2]=='c')
        flag=1;
        if(s[0]=='c'&&s[1]=='b'&&s[2]=='a')
        flag=1;
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}