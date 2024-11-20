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
        string s="codeforces";
        string s1;
        cin>>s1;
         int cnt=0;
        
        for(int i=0;i<10;i++)
        {
            if(s1[i]!=s[i])
            cnt++;
        }
        cout<<cnt<<endl;

    }
}