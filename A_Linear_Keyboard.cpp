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
        string sub;
        cin>>sub;
        int in,in2,subb,sum=0;
        for(int i=0;i<sub.size()-1;i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(sub[i]==s[j])
                {
                    in=j;
                }
                if(sub[i+1]==s[j])
                {
                    in2=j;
                }
            }
             subb=abs(in-in2);
            // cout<<subb<<endl;
             sum+=subb;
        }
         cout<<sum<<endl;
    }
}