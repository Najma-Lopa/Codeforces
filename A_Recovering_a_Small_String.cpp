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
        string s="*abcdefghijklmnopqrstuvwxyz";
        cin>>n;
        int a,b,c;
        if(n<=28)
        {
            a=1;
            b=1;
            c=n-a-b;
            cout<<s[a]<<s[b]<<s[c]<<endl;
        }
        else
        {
            a=26;
            n=n-a;
            if(n>26)
            {
                b=26;
                c=n-b;
                cout<<s[c]<<s[a]<<s[b]<<endl;
            }
            else
            {
                b=1;
                c=n-1;
                cout<<s[b]<<s[c]<<s[a]<<endl;
            }
        }
    }
}