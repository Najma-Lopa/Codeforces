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
        int a;
        cin>>a;
       ll arr[a+5];
       ll arrr[a+5];
       for(int i=0;i<a;i++)
       {
        cin>>arr[i];
       }
       for(int i=0;i<a;i++)
       {
        cin>>arrr[i];
       }
       ll maxx=10000000000;
       for(int i=0;i<a;i++)
       {
        maxx=min(maxx,arr[i]);
       }
       //cout<<maxx<<endl;
       ll minn=10000000000;
       for(int i=0;i<a;i++)
       {
        minn=min(minn,arrr[i]);
       }
       ll p,q,sum=0;
       for(int i=0;i<a;i++)
       {
        p=abs(maxx-arr[i]);
        q=abs(minn-arrr[i]);
        sum=sum+max(p,q);
       }
       cout<<sum<<endl;
    }
}