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
        int n,d;
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        //cout<<arr[n-1];
        if(d<arr[n-1])
        {
            if((arr[0]+arr[1])>d)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
        // else if(d==arr[n-1])
        // {
        //     cout<<"YES"<<endl;
        // }
        else
        cout<<"YES"<<endl;
    }
}