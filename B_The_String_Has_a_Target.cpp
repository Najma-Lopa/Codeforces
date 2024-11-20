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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int in=0;
        char minn=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]<=minn)
            {
                minn=s[i];
                 in=i;
            }  
        }
        cout<<minn;
        for(int i=0;i<s.size();i++)
        {
            if(i==in)
            continue;
            cout<<s[i];
        } 
        cout<<endl;
    }
}