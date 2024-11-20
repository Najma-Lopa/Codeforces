#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>a(t+2);
    int firstZero=-1,lastZero=-1,f=0,chek1=0;
    for(int i=1; i<=t; i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
          if(f==0)
            {
                firstZero=i;
                f=1;
            }
            lastZero=i;
        }
        else chek1=1;
    }


    int cnt=1,mx=0;
    for(int i=0; i<=t; i++)
    {
        if(a[i]==1 && a[i+1]==1) cnt++;
        else
        {
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    if(chek1) cout<<max(mx,firstZero+t-lastZero-1)<<endl;

    else cout<<0<<endl;
}

