#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        int arr[t];
        int i,sum1=0,sum2=0,cnt=0;
        for(i=0; i<t; i++)
        {
            cin>>arr[i];
            sum1+=arr[i];
        }
        sum1=sum1/2;
        sort(arr,arr+t);
        for(int j=t-1;j>=0;j--)
        {
            sum2+=arr[j];
            cnt++;
            if(sum1<sum2)
                break;
        }
        cout<<cnt;
}
