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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            
            if(arr[i]%2==0&&arr[i+1]%2==0)
            {
                sum=sum-arr[i+1];
                
            }
         if(arr[i]%2!=0&&arr[i+1]%2!=0)
            {
                sum=sum-arr[i+1];
                cout<<sum<<endl;
            }
        }
        //cout<<sum<<endl;
    }
}