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
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int dif;
    int sum=0;
    for(int i=1;i<n;i=i+2)
    {
        //cout<<arr[i]<<endl;
        dif=arr[i]-arr[i-1];
        // cout<<dif<<endl;
        sum=sum+dif;
    }
    cout<<sum<<endl;
}