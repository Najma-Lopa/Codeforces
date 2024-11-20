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
       string s2;
       s2=s;
       sort(s2.begin(),s2.end());
       int cnt=0;
       for(int i=0;i<n;i++)
       {
        if(s2[i]==s[i])
        cnt++;
       } 
       cout<<n-cnt<<endl;
    }
}