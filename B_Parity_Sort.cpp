#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,
        cin>>n;
        int flag=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
          cin>>arr[i];
        }
     int temp[n];
     for(int i=0;i<n;i++)
     {
       temp[i]=arr[i];
     }
     sort(temp,temp+n);
     for(int i=0;i<n;i++)
     {
        if(arr[i]%2==temp[i]%2)
       { flag=1;
        break;}
     }
     if(flag==1)
     cout<<"YES"<<endl;
     else
     cout<<"NO";
    }
}