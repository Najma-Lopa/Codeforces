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
    int n;
    cin>>n;
    while(n--)
    {
        int p;
        cin>>p;
        // if(p<=9)
        // cout<<p<<endl;
        int cnt=0;
        int ans=0;
        while(p!=0)
        {
            ans=p%10;
            p=p/10;
            cnt++;
        }
        int extreme=(cnt-1)*9;
        cout<<extreme+ans<<endl;
    }
}

