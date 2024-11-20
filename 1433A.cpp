#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    // int cnt=0;
    while(t--)
    {
        int d;
        int cnt=0;
        cin>>d;
        int p=d%10;
        //cout<<p;
        while(d!=0)
        {
            d=d/10;
            cnt++;}
            int m=cnt;
           // cout<<m<< " ";
if(m==1)
{
    cout<<(((p*10)-10)+1)<<endl;
}
 else if(m==2)
{
    cout<<(((p*10)-10)+3)<<endl;
}
else if(m==3)
{
    cout<<(((p*10)-10)+6)<<endl;
}
else if(m==4)
{
    cout<<(((p*10)-10)+10)<<endl;
}
    }
}
