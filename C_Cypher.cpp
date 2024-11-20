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
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      int x;
      string s;
      for(int i=0;i<n;i++)
      {
        cin>>x>>s;
      }
      for(int j=0;j<x;j++)
      {
        if(s[j]=='U')
        {
            if(arr[i]==0)
            {
                arr[i]=9;
            }
            else
            arr[i]--;
        }
        else
        {
            if(arr[i]==9)
            {
                arr[i]=0;
            }
            else
            arr[i]++;
        }
      }  
    }
    
}