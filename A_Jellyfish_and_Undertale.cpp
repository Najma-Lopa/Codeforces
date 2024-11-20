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
        ll a,b,x;
        cin>>a>>b>>x;
        ll arr[x];
        for(int i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        ll sum=b;
        for(int i=0;i<x;i++)
        {
            if(arr[i]+1<=a)
            {
            sum+=arr[i];
            }
            else
            {
                sum+=(a-1);
            }
        }
        cout<<sum<<endl;
    }
}