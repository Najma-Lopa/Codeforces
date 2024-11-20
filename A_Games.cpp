#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t],arr2[t],cnt=0;
    for(int i=0;i<t;i++)
    {
      cin>>arr[i];
      cin>>arr2[i];
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t;j++)
        {
        if(arr[i]==arr2[j])
        cnt++;
        }
    }
    cout<<cnt<<endl;
}