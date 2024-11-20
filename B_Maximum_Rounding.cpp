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
        int d=s[0]-48;
        int index,flag=0;
        if(d>=5)
        {
            cout<<"1";
            for(int i=0; i<s.length(); i++)
            {
                s[i]='0';
            }
            cout<<s<<endl;
        }
            else
            {
                for( int i=s.length()-1; i>=0; i--)
                {
                    int a=s[i]-48;
                    if(a>=5 && i!=0)
                    {
                        s[i-1]++;

                        index=i;
                        flag=1;

                    }
                    else if(a>=5 && i==0)
                        index=i;

                }
                if(flag==1)
                {
                    if(index==0)
                    {
                        cout<<"1";
                        for( int i=0; i<s.length(); i++)
                            cout<<"0";
                        cout<<endl;
                    }
                    else
                    {
                        for(int i=0; i<index; i++)
                        {
                            cout<<s[i];
                        }
                        for(int i=index; i<s.size(); i++)
                            cout<<"0";
                        cout<<endl;
                    }
                }
                else
                    cout<<s<<endl;
            }
        }
    }

