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
        int ans=-1;
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++)
        {
            if(arr[i]==arr[i+1]&&arr[i+1]==arr[i+2])
            {
             ans=arr[i];
                break;
            }
            else
            ans=-1;
        }
        cout<<ans<<endl;
    }
}