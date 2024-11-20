//* بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define fl float

const int mx=1e5+123;
int arr[mx];
int main()
{
    optimize();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int cnt=0;
    vector<int>v;
    for(int i=0;i<n-1;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    // for(int i=0;i<n;i++)
    // {
    //     if(i%2==0)
    //     v.push_back(arr[i]);
    // }
    cout<<(n-1)/2<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";  
    }

}