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
        int n,a,b;
        cin>>n;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
          cin>>a>>b;
          if(a>b)
          cnt++;
        }
    
    // int cnt=0;
    //     for(int i=0;i<n;i++)
    // {
    //   if(a>b)
    //   cnt++;
    // }
    cout<<cnt<<endl;
    }
    
}