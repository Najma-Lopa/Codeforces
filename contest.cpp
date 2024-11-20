#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n >>k;
        int ar[n];
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(abs(arr[i]-ar[1]<=k))
                cout<<arr[i] ;
        }
    }
}
