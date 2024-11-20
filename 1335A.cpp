#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   long long int n;
    while(t--)
    {
        cin>>n;
        long long int i,count=0;
        for(i=n/2; i<n; i++)
        {
            count++;
        }
    cout<<count-1<<endl;
    }
}
