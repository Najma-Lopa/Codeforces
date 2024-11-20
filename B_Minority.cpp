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
        string s;
        cin>>s;
        int c1=0,c2=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            c1++;
            else
            c2++;
        }
        if(c1<c2)
        cout<<c1<<endl;
        else if(c1==c2)
        cout<<c1-1<<endl;
        else
        cout<<c2<<endl;
    }
}