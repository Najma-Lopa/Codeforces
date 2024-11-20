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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int l=s.size();
        sort(s.begin(),s.end());
        if((s[0]==s[l-2]&&s[0]!=s[l-1])|| (s[l-1]==s[1]&&s[1]!=s[0]))
        cout<<"No"<<endl;
        else if(s[0]==s[l-1])
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }

    return 0;
}