#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n],b[n];
        ll sum=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
             //sum+=a[i];
            //cout<<sum<<endl;
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            //sum2+=b[i];

        }
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        // for(auto u:a)cout<<u<<' ';
        // cout<<endl;
        // for(auto u:b)cout<<u<<' ';
        // cout<<endl;
        int cnt=0;
       for(int i=0;i<n;i++)
       {
        if(cnt==k)
         break;
        if(a[i]<b[i])
        
            {swap(a[i],b[i]);
            cnt++;}
         
       }
       int summ=0;
       for(int i=0;i<n;i++)
       {
        summ+=a[i];
       }
    //    if(sum==sum2&&k==0)
    //    cout<<sum<<endl;
    //    else if(sum>summ)
    //    cout<<sum<<endl;
    //    else
       cout<<summ<<endl;
    }
}
