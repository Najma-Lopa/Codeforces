#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,d,j=0,temp,count=0;
    cin>>t>>b>>d;
    while(t--)
    {
        cin>>temp;
        if(temp>b)continue;
        j+=temp;
        if(j>d)
        {
            count++;
            j=0;

        }

    }
    cout<<count<<endl;
}
