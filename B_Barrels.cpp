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
         ll n,k;
         cin>>n>>k;
         vector<int>v(n);
         for(int i=0;i<n;i++)
         {
         cin>>v[i];
         }
         sort(v.begin(),v.end(),greater<int>());
         ll sum=0;
        //  for(auto u:v)
        //  {
        //     cout<<v[u]<<endl;
        //  }
         for(int i=0;i<=k;i++)
         {
            sum=sum+v[i] ;
         }
         cout<<sum<<endl;
         
     }
    
}