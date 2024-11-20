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
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
        {i=i+2;}
        else if (s[i]=='1'&&s[i+1]=='4')
        {
            i++;
            //continue;
        }
        else if(s[i]=='1')
        {
            
             continue;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}