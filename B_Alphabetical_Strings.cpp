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
        int flag=0;
        int p=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
            p=i;
            break;
            }
        }
       if(p==-1)
       {
        cout<<"NO"<<endl;
       } 
       else
       {
        int i=p-1;
        int j=p+1;
        char ch='b';
        while(i>=0||j<s.size())
        {
            if(s[i]==ch)
            {
                ch++;
                i--;
            }
            else if(s[j]==ch)
            {
                ch++;
                j++;
            }
            else
            {
            flag=1;
            break;
            }
        }
       if(flag==1)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
       }
    }
}