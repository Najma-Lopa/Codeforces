#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    // long long int n,count=0;
    cin>>t;
   // for(long long int i=0;i<t;i++)
   while(t--)
            {
                 long long int n,count=0;
        cin>>n;
        for( long long int i=1;i<=9;i++)
        {
            long long int temp=i;
            while(temp<=n)
            {
                temp=temp*10+i;
                count++;
            }
        }
        cout<<count<< " ";
    }
}
