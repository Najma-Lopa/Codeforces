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
        int n;
        cin>>n;
        char ch='#';
        char c='.';
        int m;
        for(int i=0;i<n;i++)
        {
            m=2;
            if(i%2==1)
            {
                ch='.';
                c='#';
            }
        }
            for(int p=0;p<m;p++)
            {
            for(int j=0;j<n;j++)
            {
                for(int q=0;q<2;q++)
                {
                if(j%2==0)
                cout<<ch;
                else
                cout<<c;
                }
            }
            cout<<endl;}
        }
    }