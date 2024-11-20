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
        int len=s.size();
        int flag=0;
        if(s=="101" || len<3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
        for(int i=0;i<s.size();i++)
        {
            if(s[0]=='1' && s[1]=='0' && s[2]!='0')
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        }
    }
}