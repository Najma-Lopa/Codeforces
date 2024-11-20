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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans,p,q,r;
    if(arr[0]!=0)
    cout<<"0"<<endl;
    else
    {
    for(int i=0;i<n-1;i++)
    {
        ans=(arr[i+1]-arr[i]);
        if(ans>1)
        {
            p=arr[i];
            break;
        }
        else
        {
            p=arr[i+1];
        }
    }
     cout<<p+1<<endl;
    }
}