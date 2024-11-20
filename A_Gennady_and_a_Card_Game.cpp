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
    int flag=0;
    for(int i=0;i<5;i++)
    {
        string s2;
        cin>>s2;
        if(s[0]==s2[0]||s[1]==s2[1])
        flag=1;
    }
    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}