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
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        
       //ll maxx=1000000000000;
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            ll p=sum/n;
        int flag=0;
        ll q=0;
            for(int i=0;i<n;i++)
            {
               if(arr[i]>p)
               {
                arr[i+1]+=arr[i]-p;
               }
               else if(arr[i]==p)
               {continue;}
               else
               {
                flag=1;
                break;
               }
            }
            if(flag==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
