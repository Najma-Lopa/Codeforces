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
    string st="WUB";
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==st[0]&&s[i+1]==st[1]&&s[i+2]==st[2])
        {
            cout<<" "<<endl;
            i=i+2;
        }
        else
        cout<<s[i];
    }
}