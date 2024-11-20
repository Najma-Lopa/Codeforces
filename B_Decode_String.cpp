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
    vector<char>v;

    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            string st;
            st+=s[i-1];
            st+=s[i-2];
            reverse(st.begin(),st.end());
            int a=stoi(st)+'a'-1;
            char ch=a;
            // cout<<ch;
            v.push_back(ch);
            i=i-2;  
        }
        else
        {
            char ch;
            ch=(s[i]+48);
            v.push_back(ch);
        }
        
    }
    
    
    string st;
    for(auto u:v)
    {
        st+=u;
    }
    reverse(st.begin(),st.end());
    cout<<st<<endl;

  }
    
}