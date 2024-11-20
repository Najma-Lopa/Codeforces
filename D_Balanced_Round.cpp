#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n >>k;
        vector<long long int>v;
        for(long long int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        long long int cnt=1,x=1,d;
        sort(v.begin(),v.end());
        for(long long int i=0;i<n-1;i++)
        {
          d=v[i+1]-v[i];
          if(d<=k)
          cnt++;
           if(cnt>x)
          x=cnt;
          if(d>k)
          cnt=1;
        }
         //x=max(x,cnt);
        cout<<n-x<<endl;

    }
}