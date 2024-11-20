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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v1;
        vector<ll>v2;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            v2.push_back(b);
        }
        ll sum=0;
        ll maxx=0;
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            if(k>0)
            {
                sum+=v1[i];
                if(maxx<v2[i])
                {
                    maxx=v2[i];
                }
                k--;
                cnt=max(cnt,sum+k*maxx);
            }
        }
        cout<<cnt<<endl;
    }
}