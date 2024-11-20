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
        int d;
        for(int i=0;i<s.size();i++)
        {
            if(s[s.size()-1]=='o')
            d=1;
            if(s[s.size()-1]=='u')
            d=2;
            if(s[s.size()-1]=='a')
            d=3;
        }
        if(d==1)
        {
            cout<<"FILIPINO"<<endl;
        }
        if(d==2)
        {
            cout<<"JAPANESE"<<endl;
        }
        if(d==3)
        {
            cout<<"KOREAN"<<endl;
        }
    }
}