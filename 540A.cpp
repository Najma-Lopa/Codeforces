#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    cin>>s1 >>s2;
    int sum=0;
    for(int i=0;i<t;i++)
    {
        int d,p;
      d= abs(s1[i]-s2[i]);
      if(d>5)
        p=(10-d);
        else
            p=d;
      sum=sum+p;
    }
    cout<<sum<<endl;
}
