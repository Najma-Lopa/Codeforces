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
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll cnt=1,cntt=0,cn=0;
        ll m=arr[0];
        for(int i=1;i<n;i++)
        {
            if(m==arr[i])
            {
                cnt++;
            }
            else 
            break;
        }
        //cout<<cnt<<endl;
         for(int i=n-1;i>=1;i--)
        {
            if(m==arr[i])
            {
                cntt++;
            }
            else 
            break;
        }
         for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==arr[i-1])
            {
                cn++;
            }
            else 
            break;
        }
        if(cn>=1)
        cn=cn+1;
        //  cout<<cntt<<endl;
        //  cout<<cn<<endl;
          ll sum=0;
          if(cnt>0||cntt>0)
       { 
        //cnt=cnt+1;
        //cntt=cntt+1;
        sum=cnt+cntt;}
       if(cnt==n)
        cout<<"0"<<endl;
        else
        {
        ll maxx=max(max(max(cnt,cntt),sum),cn);
        cout<<n-maxx<<endl;
        }
    }
}