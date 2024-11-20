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
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
        cnt++;
        sum+=arr[i];
        if(cnt>=m)
        break;
        }
    }
    cout<<-(sum)<<endl;
}