#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        cin>>h >>m;
        int ans;
        if(m==0){
        ans=(24-h)*60;
        cout<<ans<< " ";
        }
       else if(h==0)
        {
            ans=(23*60)+(60-m);
            cout<<ans<< " ";
        }
        else
        {
            ans=(23-h)*60+(60-m);
         cout<<ans<< " ";
        }
    }
}
