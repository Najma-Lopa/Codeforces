#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cnt=0;
    //int flag=0;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int flag=0,cnt=0;
        if(arr[0]%2!=0&&arr[0]>0)
            cout<< "YES"<<endl;
        if(arr[0]<0)
            cout<< "NO"<<endl;
        if(arr[0]%2==0&&arr[0]>0)
        {
            for(int i=1; i<n; i++)
            {
                if(arr[i]%2!=0)
                    flag=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                cnt++;
        }
        if(cnt==n)
         cout<< "YES"<<endl;
        if(flag==1)
            cout<< "NO"<<endl;
    }
}
