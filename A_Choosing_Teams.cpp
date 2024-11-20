#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0,ans;;
    for(int i=0;i<n;i++)
    {
        int d=(arr[i]+k);
        if(d<=5)
        cnt++;
    }
    if(cnt>=3)
    ans=cnt/3;
    else
    ans=0;
    cout<<ans<<endl;
}
