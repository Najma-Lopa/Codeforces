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
        sort(arr,arr+n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
          sum=sum+arr[i];
        }
        sum=sum-arr[0];
        if(arr[0]%2==0&&sum%2==0)
        cout<<"YES"<<endl;
        else if(arr[0]%2!=0&&sum%2!=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}