#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
         int flag=0;
        if(n==1)
        cout<<"YES"<<endl;
       
        else
        {
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=1;i<n-1;i++)
        {
            int d=arr[i+1]-arr[i];
            if(d==0)
            break;
            else
            flag=1;
        }
        
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;}
    }
}