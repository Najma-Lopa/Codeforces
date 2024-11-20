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
        int a=0,b=0,c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            a++;
            else if(s[i]=='B')
            b++;
            else
            c++;
        }
        if(a+c==b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}