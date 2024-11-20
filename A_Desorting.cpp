
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int flag=1,min;
        min=arr[1]-arr[0];
        for(i=0; i<n-1; i++)
        {
            if(arr[i+1]<arr[i])
            {
                flag=0;
                break;
            }
            if(arr[i+1]-arr[i]<min)
                min=arr[i+1]-arr[i];
        }
        int ans=(min/2)+1;
        if(flag==0)
            cout<<"0\n";
        else cout<<ans<<"\n";
    }
}
