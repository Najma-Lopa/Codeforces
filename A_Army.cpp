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
    for(int i=1;i<=n-1;i++)
    {
        cin>>arr[i];
    }
   // sort(arr,arr+(n-1));
    int a,b;
    cin>>a>>b;
    int d=b-a;
    int sum=0;
    for(int i=a;i<b;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
}