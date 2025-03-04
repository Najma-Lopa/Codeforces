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
        int arr[n*2];
        for(int i=0;i<n*2;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+(n*2));
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=abs(arr[i]-arr[i+1])+abs(arr[n+i+1]-arr[n+i]);
        }
        cout<<sum<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[n+i]<<" "<<arr[i]<<endl;
        }
    }
}