#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]!=arr[1]&& arr[0]!=arr[2])
            d= 1;
        else if(arr[n-1]!=arr[n-2] && arr[n-1]!= arr[n-3])
            d = n;
        else
        {

            for(int i=1; i<n-1; i++)
            {
                if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1])
                    d = i+1;
            }
        }
        cout<<d<< endl;
    }
}

