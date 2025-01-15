//* بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define fl float

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='p')
            {
                cout<<"q";
            }
            else if(s[i]=='q')
            {
                cout<<"p";
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}